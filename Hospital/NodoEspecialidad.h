#ifndef NODOESPECIALIDAD_H
#define NODOESPECIALIDAD_H
#include "NodoEspecialidad.h"
#include "Especialidad.h"

class NodoEspecialidad {
public:
	NodoEspecialidad();
	NodoEspecialidad(Especialidad *dato);
	void setDato(Especialidad *dato);
	void setSig(NodoEspecialidad  *sig);
	NodoEspecialidad  *getSig();
	Especialidad *getDato();
	~NodoEspecialidad ();
	
private:
	Especialidad *dato;
	NodoEspecialidad *sig;
};
#endif

