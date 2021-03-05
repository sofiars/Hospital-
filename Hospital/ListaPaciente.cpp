#include "ListaPaciente.h"
ListaPaciente::ListaPaciente(){
	this->ini=NULL;
	ced="";
}
void ListaPaciente::agregaralFinal(Paciente *dato){
	
	NodoPaciente *nuevo = new NodoPaciente(dato);
	
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

void ListaPaciente::archivoPac(Paciente *p){
	ofstream Paci;

	string Cedu,Nomb,Ape,Dire,Pato,TipoCi,Estad,Prior,Fech,Cam,Medi;
	Nomb=p->getNombre();
	Ape=p->getApellido();
	Cedu=p->getCedula();
	Dire=p->getDireccion();
	Pato=p->getPatologia();
	TipoCi=p->getTipoCirugia();
	Estad=p->getEstado();
	Prior=p->getPrioridad();
	Fech=p->getFechaCirugia();
	Cam=p->getCama();
	Medi=p->getDoctor();
	
	Paci.open("Paciente.txt",ios::out | ios::app);
	Paci<<Nomb<<" "<<Ape<<" "<<Cedu<<" "<<Dire<<" "<<Pato<<" "<<TipoCi<<" "<<Estad<<" "<<Prior<<" "<<Fech<<" "<<Cam<<" "<<Medi<<"\n";
	Paci.close();
}


string ListaPaciente::eliminar(string ced){
	this->ced=ced;
	
	NodoPaciente *w=ini;
	NodoPaciente *auxiliar=NULL;
	
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
NodoPaciente * ListaPaciente::getIni()
{
	return ini;
}

string ListaPaciente::mostrartodos(){
	this->ced=ced;
	
	NodoPaciente *aux=ini;
	stringstream p;
	while(aux!=NULL){
		p<<aux->getDato()->toString();
		aux=aux->getSig();
	}
	
	return p.str();
	
}
string ListaPaciente::mostrarporcedula(string ced){
	this->ced=ced;
	
	NodoPaciente *aux=ini;
	stringstream p;
	while(aux!=NULL){
		if(aux->getDato()->getCedula()==ced){
			p<<aux->getDato()->toString();
		}
		aux=aux->getSig();
	}
	
	return p.str();
}
ListaPaciente::~ListaPaciente() {
	delete ini;
}
