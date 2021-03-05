#ifndef LISTAPABELLON_H
#define LISTAPABELLON_H
#include "Pabellon.h"
#include "NodoPabellon.h"
#include <sstream>
class ListaPabellon {
public:
	ListaPabellon();
	void agregaralfinal(Pabellon *dato);
	string mostrar();
	void eliminar();
	~ListaPabellon();
private:
	NodoPabellon *ini;
};

#endif

