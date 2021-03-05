#ifndef NODOPABELLON_H
#define NODOPABELLON_H
#include "Pabellon.h"
class NodoPabellon {
public:
	NodoPabellon();
	NodoPabellon(Pabellon *dato);
	void setDato(Pabellon *dato);
	void setSig(NodoPabellon *sig);
	Pabellon *getDato();
	NodoPabellon *getSig();
	~NodoPabellon();
private:
	NodoPabellon *sig;
	Pabellon *dato;
};

#endif

