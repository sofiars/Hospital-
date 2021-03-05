#include "Paciente.h"

Paciente::Paciente() {
	nombre="";
	apellido="";
	direccion="";
	cedula="";
	patologia="";
	tipoCirugia="";
	estado="";
	prioridad = "";
	fechaCirugia="";
	cama="";
	doctor="";
}
Paciente::Paciente(string nombre, string apellido, string direccion, string  cedula, string patologia,string tipoCirugia, string prioridad, string fechaCirugia, string cama, string doctor){
	
	this->nombre = nombre;
	this->apellido = apellido;
	this->direccion = direccion;
	this->cedula = cedula;
	this->patologia = patologia;
	this->tipoCirugia = tipoCirugia;
	this->prioridad = prioridad;
	this->fechaCirugia = fechaCirugia;
	this->cama = cama;
	this->doctor = doctor;
}
Paciente::~Paciente() {
}

//Paciente::Paciente(string cedula){
//	this->cedula = cedula;
//}

void Paciente::setNombre(string nombre){
	this->nombre = nombre;
}

void Paciente::setApellido(string apellido){
	this->apellido = apellido;
}

void Paciente::setDireccion(string direccion){
	this->direccion = direccion;
}

void Paciente::setCedula(string cedula){
	this->cedula = cedula;
}

void Paciente::setPatologia(string patologia){
	this->patologia = patologia;
}

void Paciente::setTipoCirugia(string ptipoCirugia){
	this->tipoCirugia = tipoCirugia;
}

void Paciente::setEstado(string estado){
	this->estado = "Internado";
}

void Paciente::setPrioridad(string prioridad){
	this->prioridad = prioridad;
}

void Paciente::setFechaCirugia(string fechaCirugia){
	this->fechaCirugia = fechaCirugia;
}

void Paciente::setCama(string cama){
	this->cama = cama;
}

void Paciente::setDoctor(string doctor){
	this->doctor = doctor;
}

string Paciente::getNombre(){
	return nombre;
}

string Paciente::getApellido(){
	return apellido;
}

string Paciente::getDireccion(){
	return direccion;
}

string Paciente::getCedula()
{
	return cedula;
}

string Paciente::getPatologia(){
	return patologia;
}

string Paciente::getTipoCirugia(){
	return tipoCirugia;
}

string Paciente::getEstado(){
	return estado;
}

string Paciente::getPrioridad(){
	return prioridad;
}

string Paciente::getFechaCirugia(){
	return fechaCirugia;
}

string Paciente::getCama(){
	return cama;
}

string Paciente::getDoctor(){
	return doctor;
}

string Paciente::toString() {
	stringstream p;
	p << "          Informacion del Paciente" << endl;
	p << "Nombre: " << nombre << endl;
	p << "Apellido: " << apellido << endl;
	p << "Direccion: " << direccion << endl;
	p << "Cedula: " << cedula << endl;
	p << "Patologia: " << patologia << endl;
	p << "Tipo de Cirugia: " << tipoCirugia << endl;
	p << "Estado: " << estado << endl;
	p << "Prioridad: " << prioridad << endl;
	p << "Fecha de la cirugia: " << fechaCirugia << endl;
	p << "Cama: " << cama << endl;
	p << "Doctor: " << doctor << endl;
	return p.str();
}
