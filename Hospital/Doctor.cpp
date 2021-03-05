#include "Doctor.h"
Doctor::Doctor(){
	nombre="";
	apellido="";
	cedula="";
	especialidad="";
}

Doctor::Doctor(string nombre, string apellido, string cedula, string especialidad){
	this-> nombre = nombre;
	this-> apellido = apellido;
	this-> cedula = cedula;
	this-> especialidad = especialidad;
}

//Doctor::Doctor(string id){
//	this->id = id;
//}

void Doctor::setCedula(string cedula){
	this->cedula = cedula;
}

void Doctor::setEspecialidad(string especialidad) {
	this->especialidad = especialidad;
}

void Doctor::setEstado(string estado) {
	this->estado = "Trabajando";
}

string Doctor::getCedula(){
	return cedula;
}

string Doctor::getEspecialidad(){
	return especialidad;
}

string Doctor::getEstado(){
	return estado;
}

Doctor::~Doctor(){
}

string Doctor::toString(){
	stringstream c;
	
	c << "\tInfomarcion del Doctor" << endl;
	c << "Nombre: " << nombre << endl;
	c << "Apellido: " << apellido << endl;
	c << "Cedula: " << cedula << endl;
	c << "Estado :"<< estado<<endl;
	c << "Especialidad: " <<especialidad << endl;
	
	return c.str();
}
