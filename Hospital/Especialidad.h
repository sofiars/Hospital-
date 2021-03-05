#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include <sstream>
#include <iostream>
using namespace std;
class Especialidad {
public:
	Especialidad();
	Especialidad(string,string,string);
	~Especialidad();
	void setNombre(string);
	string getNombre();
	void setCodigo(string codigo);
	void setDescripcion(string descripcion);
	string getCodigo();
	string getDescripcion();
	string toString();
private:
	string nombre;
	string codigo;
	string descripcion;
	
};

#endif
