#ifndef ESTUDIANTE_CPP
#define ESTUDIANTE_CPP
#include "Persona.cpp"
#include <iostream>

using namespace std;

class Estudiante : public Persona {
private:
   string carnet;

public:
    
    Estudiante();

    
    Estudiante(string cui, string nom, string ape, string dir, string fn, int tel, bool gen, string car): Persona (cui, nom, ape, dir,fn, tel, gen) {

	carnet= car ;

	}
	void setCui (string cui){cui = cui;}
	void setNombres (string nom ){nombres = nom;}
	void setApellidos (string ape){apellidos = ape;}
	void setDireccion (string dir){direccion= dir; }
	void setFechaNacimiento (string fn){fecha_nacimiento= fn; }
	void setTelefono (int tel){telefono= tel;}
	void setGenero (bool gen){genero= gen; }
	void setCarnet (string car){carnet= car; }
	
	string geCui (){return cui;}
	string getNombres (){return nombres;}
	string getApellidos (){return apellidos;}
	string getDireccion (){return direccion;}
	string getFechaNacimiento (){return fecha_nacimiento;}
	int getTelefono (){return telefono;}
	bool getGenero (){return genero;}
	string getCarnet (){return carnet;}
	
    void mostrarEstudiante()
    { 
    cout << endl << endl<< "--- Datos Estudiante ---" << endl;
    cout << "Nombre: " << nombres << " " << apellidos << endl;
    cout << "Carnet: " << carnet << endl;
}
};
#endif
