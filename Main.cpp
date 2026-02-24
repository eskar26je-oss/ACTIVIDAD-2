#include "Docente.cpp"
#include "Estudiante.cpp"
#include <iostream>
using namespace std;
main (){
	string cui, nombres, apellidos, direccion, fecha_nacimiento, codigo, nit, profesion, carnet;
	float salario;;
    bool genero;
	int telefono, opcion;
	
	cout << "===== SISTEMA DE REGISTRO =====" << endl;
    cout << "1. Registrar Docente" << endl;
    cout << "2. Registrar Estudiante" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;	
	
	
	cout << "\n--- DATOS GENERALES ---" << endl;
	cout <<"Ingresar CUI: ";
	cin >> cui ;
	cout <<"Ingresar Nombres: ";
	cin >> nombres;
	cout <<"Ingresar Apellidos: ";
	cin >> apellidos;
	cout <<"Ingresar Direccion: ";
	cin >> direccion;
	cout <<"Ingresar Fecha de nacimiento: ";
	cin >> fecha_nacimiento ;
	cout <<"Ingresar Telefono: ";
	cin >> telefono;
	cout <<"Ingresar Genero 0=Femenino 1=Masculino: ";
	cin >> genero ;
	
	if (opcion == 1) {
        // SOLO DOCENTE
        cout <<endl<< "--- DATOS DOCENTE ---" << endl;
        cout << "Ingresar Codigo: "; 
		cin >> codigo;
        cout << "Ingresar NIT: "; 
		cin >> nit;
        cout << "Ingresar Salario: "; 
		cin >> salario;
        cout << "Ingresar Profesion: "; 
		cin >> profesion;

        Docente objD = Docente(cui, nombres, apellidos, direccion, fecha_nacimiento, telefono, genero, codigo, nit, salario, profesion);
        objD.mostrarDocente();
        
        // Prueba de actualización de NIT
        cout <<endl<< "Ingresar nuevo NIT: "; cin >> nit;
        objD.setNit(nit);
        cout << "NIT actualizado: " << objD.getNit() << endl;

    } else if (opcion == 2) {
        // SOLO ESTUDIANTE
        cout <<endl<< endl<< "--- DATOS ESTUDIANTE ---" << endl;
        cout << "Ingresar Carnet: "; 
		cin >> carnet;

        Estudiante objE = Estudiante(cui, nombres, apellidos, direccion, fecha_nacimiento, telefono, genero, carnet);
        objE.mostrarEstudiante();
    } else {
        cout << "Opcion no valida." << endl;
    }
	
    cout << endl;
    system("pause");
    return 0;

}
