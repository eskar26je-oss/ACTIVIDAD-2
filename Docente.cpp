#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente : Persona {
	private :
		string codigo, nit, profesion;
		float salario;
		
	public :
		
		Docente(){
		}
		Docente (string cui, string nom, string ape, string dir, string fn, int tel,bool gen, string cod, string n, float sal, string prof) : Persona (cui, nom, ape, dir,fn, tel, gen) {
		nit = n;
		codigo = cod;
		profesion = prof;
		salario = sal;
		}
};	

