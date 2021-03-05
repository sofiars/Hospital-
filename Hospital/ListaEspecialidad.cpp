#include "ListaEspecialidad.h"

ListaEspecialidad::ListaEspecialidad() {
	this->ini=NULL;
}
void ListaEspecialidad::agregaralFinal(Especialidad *dato){
	NodoEspecialidad *nuevo = new NodoEspecialidad(dato);
	
	if(ini==NULL){
		ini=nuevo;
		cout<<"El dato se ha agregado a la lista\n";
		system("pause");
	}else{
		nuevo->setSig(ini);
		ini=nuevo;
		cout<<"El dato se ha agregado a la lista\n";
		system("pause");
	}
}
void ListaEspecialidad::eliminar(Especialidad *dato){
	
}
string ListaEspecialidad::mostrartodas(){
	NodoEspecialidad *aux=ini;
	stringstream p;
	while(aux!=NULL){
		p<<aux->getDato()->toString();
		p<<endl;
		aux=aux->getSig();
	}
	return p.str();
	
	
}
string ListaEspecialidad::mostrarpordescripcion(string descripcion){
	this->descripcion=descripcion;
	
	NodoEspecialidad *aux=ini;
	stringstream p;
	while(aux!=NULL){
		if(aux->getDato()->getDescripcion()==descripcion){
			p<<aux->getDato()->toString();
		}
		aux=aux->getSig();
	}
	
	return p.str();
}
ListaEspecialidad::~ListaEspecialidad() {
	delete ini;
}
