#ifndef DOCENTE_CPP
#define DOCENTE_CPP
#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente : public Persona {
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
		
	void setCui (string cui){cui = cui;}
	void setNombres (string nom ){nombres = nom;}
	void setApellidos (string ape){apellidos = ape;}
	void setDireccion (string dir){direccion= dir; }
	void setFechaNacimiento (string fn){fecha_nacimiento= fn; }
	void setTelefono (int tel){telefono= tel;}
	void setGenero (bool gen){genero= gen; }
	void setCodigo (string cod){codigo= cod; }
	void setNit (string n){nit= n; }
	void setSalario (float sal){salario= sal; }
	void setProfesion (string prof){profesion= prof; }
	
	//get(mostrar)
	string geCui (){return cui;}
	string getNombres (){return nombres;}
	string getApellidos (){return apellidos;}
	string getDireccion (){return direccion;}
	string getFechaNacimiento (){return fecha_nacimiento;}
	int getTelefono (){return telefono;}
	bool getGenero (){return genero;}
	string getCodigo (){return codigo;}
	string getNit (){return nit;}
	float getSalario (){return salario;}
	string getProfesion (){return profesion;}


		void leer();
	void mostrarDocente (){
    cout <<endl<<  "--- Datos Docente ---" << endl;
    cout << "Nombre: " << nombres << " " << apellidos << endl;
    cout <<"Codigo: "<< codigo << "   NIT: " << nit << "   Profesion: " << profesion <<"  Salario: " << salario << endl;
}
			
};	
#endif
