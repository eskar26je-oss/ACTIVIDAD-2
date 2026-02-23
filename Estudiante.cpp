#include "Persona.cpp"
#include <iostream>

using namespace std;

class Estudiante : public Persona {
private:
    string carnet;

public:
    
    Estudiante();

    
    Estudiante(string cui, string nom, string ape, string dir, string fn, int tel, bool gen, string car): Persona (cui, nom, ape, dir,fn, tel, gen) {

	string getCarnet();

	}
	void setCui (string cui){cui = cui;}
	void setNombres (string nom ){nombres = nom;}
	void setApellidos (string ape){apellidos = ape;}
	void setDireccion (string dir){direccion= dir; }
	void setFechaNacimiento (string fn){fecha_nacimiento= fn; }
	void setTelefono (int tel){telefono= tel;}
	void setGenero (bool gen){genero= gen; }


    void mostrarEstudiante();
};
