#include "NodoPaciente.h"

NodoPaciente::NodoPaciente() {
	
}
NodoPaciente::NodoPaciente(Paciente *dato) {
	this->dato=dato;
	this->sig=NULL;
}
NodoPaciente::~NodoPaciente() {
	delete sig;
	delete dato;
}
Paciente *NodoPaciente:: getDato(){
	return dato;
}
void NodoPaciente::setDato(Paciente *dato){
	this->dato=dato;
}
NodoPaciente *NodoPaciente::getSig(){
	return sig;
}
void NodoPaciente::setSig(NodoPaciente *sig){
	this->sig=sig;
}
