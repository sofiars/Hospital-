#ifndef LISTAPACIENTE_H
#define LISTAPACIENTE_H
#include "NodoPaciente.h"
#include "Paciente.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class ListaPaciente {
public:
	ListaPaciente();
	void agregaralFinal(Paciente *dato);
	string eliminar(string ced);
	NodoPaciente * getIni();
	void archivoPac(Paciente *p);
	string mostrartodos();
	string mostrarporcedula(string ced);
	~ListaPaciente();
private:
	NodoPaciente *ini;
	string ced;
};

#endif

