#ifndef ADMINARCHIVOS_H
#define ADMINARCHIVOS_H
#include<iostream>
#include <sstream>
#include "ListaPaciente.h"
#include "Paciente.h"
#include "NodoPaciente.h"
//#include "ListaEspecialidad.h"
//#include "Especialidad.h"
//
//#include "Doctor.h"
//#include "ListaDoctor.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class AdminArchivos {
public:
	AdminArchivos();
	void Abrir();
	void Cerrar();
	void Leer();
	//ListaPersonajes cargarArchivo();
	void guardar (ListaPaciente *L);
	void Escribir (ListaPaciente *L);
	
	virtual ~AdminArchivos();
private:
	ofstream archivoP;
	ifstream archivoL;

};

#endif
