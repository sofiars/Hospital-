#include "Pabellon.h"

Pabellon::Pabellon() {
	nombre=" ";
	cant = 0;
}
Pabellon::Pabellon(string nombre){
	this->nombre = nombre;
}

void Pabellon::setGenero(string genero){
	this->genero = genero;
}

string Pabellon::getGenero(){
	return genero;
}
void Pabellon::setNombre(string nombre){
	this->nombre = nombre;
}

string Pabellon::getNombre(){
	return nombre;
}
string Pabellon::toString(){
	stringstream s;
	
	s<<"Nombre :"<<nombre<<endl;
	s<<"Genero :"<<genero<<endl;
	
	
	
}
Pabellon::~Pabellon() {
	
}
