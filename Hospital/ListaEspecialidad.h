#ifndef LISTAESPECIALIDAD_H
#define LISTAESPECIALIDAD_H
#include "Especialidad.h"
#include "NodoEspecialidad.h"
#include <iostream>
#include <sstream>

using namespace std;
class ListaEspecialidad {
public:
	ListaEspecialidad();
	void agregaralFinal(Especialidad *dato);
	void eliminar(Especialidad *dato);
	string mostrartodas();
	string mostrarpordescripcion(string descripcion);
	~ListaEspecialidad();
private:
	NodoEspecialidad *ini;
	string descripcion;
};

#endif

