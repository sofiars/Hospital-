#include "NodoCama.h"

NodoCama::NodoCama() {
}
NodoCama::NodoCama(Cama *dato){
	this->dato=dato;
	this->sig=NULL;
}
void NodoCama::setDato(Cama *dato){
	this->dato=dato;
}
void NodoCama::setSig(NodoCama *sig){
	this->sig=sig;
}
NodoCama *NodoCama::getSig(){
	return sig;
}
Cama *NodoCama::getDato(){
	return dato;
}
NodoCama::~NodoCama() {
	delete sig;
	delete dato;
}
