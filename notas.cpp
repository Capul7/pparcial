#include <iostream>
using namespace std;
class Notas{
	protected : string n_curso;
				int n_codigo, n_nota[4];

	protected : 
		Notas(){
		}
		Notas(string curso, int codigo, int nota[4]){
			n_curso = curso;
			n_codigo = codigo;
			for (int i=0; i<4; i++){
				n_nota[i] = nota[i];
			}
		}
		
	void mostrar();
};

