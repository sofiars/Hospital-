#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <sstream>
using namespace std;
class Doctor {
public:
	Doctor();
	Doctor(string nombre, string apellido, string cedula, string especialidad);
	~Doctor();
	void setCedula(string cedula);
	string getCedula();
	void setEspecialidad(string especialidad);
	string getEspecialidad();
	void setEstado(string estado);
	string getEstado();
	string toString();
private:
	string nombre;
	string apellido;
	string cedula;
	string estado;
	string especialidad;
};

#endif

