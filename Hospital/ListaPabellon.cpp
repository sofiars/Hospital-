#include "ListaPabellon.h"

ListaPabellon::ListaPabellon() {
	this->ini=NULL;
}
void ListaPabellon::agregaralfinal(Pabellon *dato){
	NodoPabellon *nuevo = new NodoPabellon(dato);
	
	if(ini==NULL){
		ini=nuevo;
		cout<<"El dato se ha agregado a la lista\n";
		system("pause");
	}else{
		nuevo->setSig(ini);
		ini=nuevo;
		cout<<"El dato se ha agregado a la lista\n ";
		system("pause");
	}
}
string ListaPabellon::mostrar(){
	
	NodoPabellon *aux=ini;
	stringstream p;
	while(aux!=NULL){
		p<<aux->getDato()->toString();
		aux=aux->getSig();
	}
	return p.str();
	
}
void ListaPabellon::eliminar(){
	
}
ListaPabellon::~ListaPabellon() {
	delete ini;
}
