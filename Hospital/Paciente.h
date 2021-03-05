#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <sstream>
using namespace std;
class Paciente {
public:
	Paciente();
	Paciente(string, string, string, string,string, string , string, string, string, string);
	~Paciente();
	
	void setNombre(string);
	string getNombre();
	void setApellido(string);
	string getApellido();
	void setDireccion(string);
	string getDireccion();
	void setCedula(string cedula);
	string getCedula();
	void setPatologia(string);
	string getPatologia();
	void setTipoCirugia(string);
	string getTipoCirugia();
	void setEstado(string);
	string getEstado();
	void setPrioridad(string);
	string getPrioridad();
	void setFechaCirugia(string);
	string getFechaCirugia();
	void setCama(string);
	string getCama();
	void setDoctor(string);
	string getDoctor();
	
	string toString();
	
private:
	string nombre;
	string apellido;
	string cedula;
	string direccion;
	string patologia;
	string tipoCirugia;
	string estado;
	string prioridad;
	string fechaCirugia;
	string cama;
	string doctor;
};

#endif
