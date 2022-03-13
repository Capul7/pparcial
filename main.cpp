#include "Estudiantes.cpp"
#include <iostream>
using namespace std;

int main(){
	int m_nestudiantes, m_codigo, m_nota[4], m_promedio = 0;
	string m_nombre, m_apellido, m_curso;
	
	cout<<"-----------Bienvenido----------\n\n";
	cout<<"Cuantos estudiantes desea ingresar: ";
	cin>>m_nestudiantes;
	
	for(int ii=0; ii<m_nestudiantes; ii++){
		system("cls");
		cout<<"------------Estudiantes No."<<ii+1<<"------------"<<endl;
		cout<<"Codigo de estudiante: ";
		cin>>m_codigo;
		cout<<"Nombre del estudiante: ";
		cin>>m_nombre;
		cout<<"Apellido del estudiante: ";
		cin>>m_apellido;
		cout<<"Curso: ";
		cin>>m_curso;
		
		for (int i=0; i<4; i++){
			cout<<i+1<<"# Nota: ";
			cin>>m_nota[i];
			m_promedio = m_promedio + m_nota[i];
		}
		
		system("cls");
		cout<<"------Datos del estudiante No."<<ii+1<<"------"<<endl;
		Estudiante obj = Estudiante(m_curso, m_codigo, m_nota, m_nombre, m_apellido);
		obj.mostrar();
		
		cout<<"    [+]Nota final del curso: ";
		
		m_promedio = m_promedio/4;
		if(m_promedio>60){
			cout<<"Aprobado";
		}else{
			cout<<"Reprobado";
		}
		cout<<", nota final "<<m_promedio<<"\n\n\n";
		system("pause");
		m_promedio = 0;
	}
}
