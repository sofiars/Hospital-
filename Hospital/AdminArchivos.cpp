#include "AdminArchivos.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
AdminArchivos::AdminArchivos() {
}

//AdminArchivos::AdminArchivos(const AdminArchivos& orig) {
//}

AdminArchivos::~AdminArchivos() {
}
void AdminArchivos::Abrir(){
	archivoP.open("Paciente.txt");  // constructor de ofstream
//	archivoE.open("Especialidades.txt");
//	archivoD.open("Doctores.txt");
}
void AdminArchivos::Cerrar(){
	archivoP.close();
//	archivoE.close();
//	archivoD.close();
}
//void AdminArchivos::LeerE(){
//	archivoES.open("Users\Sofia\Desktop\Entregable 3.txt");
//	char linea [128];
//	if(archivoES.fail())
//		cerr << "Error al abrir el archivo Pruebas.txt" << endl;
//	else
//		while(!archivoES.eof())
//	{
//		archivoES.getline(linea, sizeof(linea));
//		cout << linea << endl;        
//	}
//}
//void AdminArchivos::LeerD(){
//	archivoDO.open("Users\Sofia\Desktop\Entregable 3.txt");
//	char linea[128];
//	if(archivoDO.fail())
//		cerr << "Error al abrir el archivo Pruebas.txt" << endl;
//	else
//		while(!archivoDO.eof())
//	{
//		archivoDO.getline(linea, sizeof(linea));
//		cout << linea << endl;        
//	}
//}
void AdminArchivos::Leer(){
	archivoL.open("Users\Sofia\Desktop\Entregable 3.txt");
	char linea[128];
	if(archivoL.fail())
		cerr << "Error al abrir el archivo Pruebas.txt" << endl;
	else
		while(!archivoL.eof())
	{
		archivoL.getline(linea, sizeof(linea));
		cout << linea << endl;        
	}
		
}

void AdminArchivos::guardar (ofstream out){
if()
}

void AdminArchivos::Escribir(ListaPaciente *L){
	archivoP<< L->mostrartodos();
}
//void AdminArchivos::Escribir(ListaEspecialidad *E){
//	archivoE<< E->mostrartodas();
//}
//void AdminArchivos::Escribir(ListaDoctor *D){
//	archivoD<< D->mostrartodos();
//}
