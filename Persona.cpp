#include <iostream>
using namespace std;

class Persona{

protected: 
    string cui, nombres, apellidos, direccion, fecha_nacimiento;
    bool genero;
	int telefono;	
	

	Persona (){
		
	}  
	Persona(string c, string nom, string ape, string dir, string fn, int tel){
		cui = c;
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fn;
		telefono = tel;
	}
	
	void crear();
	void leer();
	void actualizar();
	void borrar()
;
};


