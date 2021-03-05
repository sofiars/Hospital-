#ifndef NODOPACIENTE_H
#define NODOPACIENTE_H
#include "Paciente.h"

class NodoPaciente {
public:
	NodoPaciente();
	NodoPaciente(Paciente *dato);
	void setDato(Paciente *dato);
	void setSig(NodoPaciente *sig);
	NodoPaciente *getSig();
	Paciente *getDato();
	~NodoPaciente();
	
private:
	Paciente *dato;
	NodoPaciente *sig;
};

#endif
