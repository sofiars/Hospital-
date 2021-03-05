#include "Especialidad.h"

Especialidad::Especialidad() {
	nombre="";
	codigo="";
	descripcion="";
}

Especialidad::Especialidad(string nombre,string codigo,string descripcion) {
	this->nombre=nombre;
	this->codigo=codigo;
	this->descripcion=descripcion;
}

Especialidad::~Especialidad() {
	
}
string Especialidad::getNombre(){
	return nombre;
}
void Especialidad::setNombre(string){
	this->nombre=nombre;
}
void Especialidad::setCodigo(string codigo){
	this->codigo=codigo;
}
void Especialidad::setDescripcion(string descripcion){
	this->descripcion=descripcion;
}
string Especialidad::getCodigo(){
	return codigo;
}
string Especialidad::getDescripcion(){
	return descripcion;
}
string Especialidad::toString(){
	stringstream x;
	x<<"Especialidad :"<<nombre<<endl;
	x<<"Codigo :"<<codigo<<endl;
	x<<"Descripcion :"<<descripcion<<endl;
	return x.str();
}
