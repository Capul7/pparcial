#include "notas.cpp"
#include <iostream>
using namespace std;

class Estudiante : Notas{
	
	private: string e_nombre, e_apellido;
				
	
	public : 
		Estudiante(){
		}
		Estudiante(string curso, int codigo, int nota[3], string nombre, string apellido): Notas(curso, codigo, nota){
			e_nombre = nombre;
			e_apellido = apellido;
		}
			
	void setCurso(string curso){n_curso = curso;}
	void setCodigo(int codigo){n_codigo = codigo;}	
	void setNota1(int nota[1]){n_nota[1] = nota[1];}	
	void setNota2(int nota[2]){n_nota[2] = nota[2];}	
	void setNota3(int nota[3]){n_nota[3] = nota[3];}
	void setNota4(int nota[4]){n_nota[4] = nota[4];}
	void setNombre(string nombre){e_nombre = nombre;}
	void setApellido(string apellido){e_apellido = apellido;}
	
	string getCurso(){return n_curso;}
	int getCodigo(){return n_codigo;}
	int getNota1(){return n_nota[1];}
	int getNota2(){return n_nota[2];}
	int getNota3(){return n_nota[3];}
	int getNota4(){return n_nota[4];}
	string getNombre(){return e_nombre;}
	string getApellido(){return e_apellido;}
	
	void mostrar(){
		cout<<"[+]Codigo: "<<n_codigo<<"\n[+]Nombre: "<<e_nombre<<"\n[+]Apellido: "<<e_apellido<<"\n[+]Curso: "<<n_curso<<"\n[+]Notas:";
		for (int i=0; i<4; i++){
			cout<<"\n  ["<<i+1<<"]"<<n_nota[i];
		}
		cout<<endl;
	}
};
