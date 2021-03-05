#ifndef LISTADOCTOR_H
#define LISTADOCTOR_H
#include "NodoDoctor.h"
#include "Doctor.h"
#include <sstream>
class ListaDoctor {
public:
	ListaDoctor();
	void agregaralfinal(Doctor *dato);
	string mostrartodos();
	string mostrarporcedula(string ced);
	string eliminar(string ced);
	~ListaDoctor();
private:
	NodoDoctor *ini;
	string ced;
};

#endif

