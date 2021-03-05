#include "NodoEspecialidad.h"

NodoEspecialidad::NodoEspecialidad() {
	
}
NodoEspecialidad::NodoEspecialidad(Especialidad *dato) {
	this->dato=dato;
	this->sig=NULL;
}
void NodoEspecialidad::setDato(Especialidad *dato){
	this->dato=dato;
}
void NodoEspecialidad::setSig(NodoEspecialidad  *sig){
	this->sig=sig;
}
NodoEspecialidad  *NodoEspecialidad::getSig(){
	return sig;
}
Especialidad *NodoEspecialidad::getDato(){
	return dato;
}
NodoEspecialidad::~NodoEspecialidad() {
	delete dato;
	delete sig;
}
