#include "NodoPabellon.h"

NodoPabellon::NodoPabellon() {
}
NodoPabellon::NodoPabellon(Pabellon *dato) {
	this->dato=dato;
	this->sig=NULL;
}
void NodoPabellon::setDato(Pabellon *dato){
	this->dato=dato;
	
}
void NodoPabellon::setSig(NodoPabellon *sig){
	this->sig=sig;
	
}
Pabellon *NodoPabellon::getDato(){
	return dato;
	
}
NodoPabellon *NodoPabellon::getSig(){
	return sig;
	
}
NodoPabellon::~NodoPabellon() {
	delete sig;
	delete dato;
}
