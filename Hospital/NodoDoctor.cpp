#include "NodoDoctor.h"

NodoDoctor::NodoDoctor() {
	
}
NodoDoctor::NodoDoctor(Doctor *dato) {
	this->dato=dato;
	this->sig=NULL;
}
void NodoDoctor::setDato(Doctor *dato){
	this->dato=dato;
}
void NodoDoctor::setSig(NodoDoctor *sig){
	this->sig=sig;
}
Doctor *NodoDoctor::getDato(){
	return dato;
}
NodoDoctor *NodoDoctor::getSig(){
	return sig;
}
NodoDoctor::~NodoDoctor() {
	delete dato;
	delete sig;
}
