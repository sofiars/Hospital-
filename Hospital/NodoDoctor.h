#ifndef NODODOCTOR_H
#define NODODOCTOR_H
#include "Doctor.h"
class NodoDoctor {
public:
	NodoDoctor();
	NodoDoctor(Doctor *dato);
	void setDato(Doctor *dato);
	void setSig(NodoDoctor *sig);
	Doctor *getDato();
	NodoDoctor *getSig();
	
	~NodoDoctor();
private:
	NodoDoctor *sig;
	Doctor *dato;
};

#endif

