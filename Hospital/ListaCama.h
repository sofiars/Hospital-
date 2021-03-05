#ifndef LISTACAMA_H
#define LISTACAMA_H
#include "NodoCama.h"
#include "Cama.h"
class ListaCama {
public:
	ListaCama();
	void agregaralfinal(Cama *dato);
	string mostrar();
	void eliminar();
	~ListaCama();
private:
};

#endif

