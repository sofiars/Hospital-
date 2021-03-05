#ifndef NODOCAMA_H
#define NODOCAMA_H
#include "Cama.h"
class NodoCama {
public:
	NodoCama();
	NodoCama(Cama *dato);
	void setDato(Cama *dato);
	void setSig(NodoCama *sig);
	NodoCama *getSig();
	Cama *getDato();
	~NodoCama();
private:
	NodoCama *sig;
	Cama *dato;
};

#endif

