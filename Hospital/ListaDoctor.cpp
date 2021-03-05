#include "ListaDoctor.h"

ListaDoctor::ListaDoctor() {
	this->ini=NULL;
}
void ListaDoctor::agregaralfinal(Doctor *dato){
	NodoDoctor *nuevo = new NodoDoctor(dato);
	
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
string ListaDoctor::eliminar(string ced){
	this->ced=ced;
	
	NodoDoctor *w=ini;
	NodoDoctor *auxiliar=NULL;
	
	if(w!=NULL){
		while(w!=NULL && w->getDato()->getCedula()!=ced){
			auxiliar=w;
			w=w->getSig();
		}
	}
	if(w==NULL){
		return "No se encontro el paciente";
		system("pause");
	}else{
		if(auxiliar==NULL){
			ini=w->getSig();
		}else{
			auxiliar->setSig(w->getSig());
		}
		delete w;
		return "eliminado";
		system("pause");
	}
}
string ListaDoctor::mostrartodos(){
	
	NodoDoctor *aux=ini;
	stringstream p;
	while(aux!=NULL){
		p<<aux->getDato()->toString();
		p<<endl;
		aux=aux->getSig();
	}
	
	return p.str();
	
}
string ListaDoctor::mostrarporcedula(string ced){
	this->ced=ced;
	
	NodoDoctor *aux=ini;
	stringstream p;
	while(aux!=NULL){
		if(aux->getDato()->getCedula()==ced){
			p<<aux->getDato()->toString();
		}
		aux=aux->getSig();
	}
	
	return p.str();
}
ListaDoctor::~ListaDoctor() {
	delete ini;
}
