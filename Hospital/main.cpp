#include<iostream>
using namespace std;
#include "ListaPaciente.h"
#include "Paciente.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "ListaEspecialidad.h"
#include "Especialidad.h"
#include "AdminArchivos.h"
#include "Doctor.h"
#include "ListaDoctor.h"
int main (int argc, char *argv[]) {
	//Listas
	ListaPaciente *ListPaciente=new ListaPaciente();// Lista de los pacientes
	ListaEspecialidad *listEspec=new ListaEspecialidad();
	ListaDoctor *lisDoc=new ListaDoctor();
	//Atributos del paciente
	string nombre;
	string apellido;
	string cedula;
	string direccion;
	string patologia;
	string tipoCirugia;
	string prioridad;
	string fechaCirugia;
	string cama;
	string doctor;
	
	
	//atributos de la especialidad
	string espec;
	string codigo;
	string descripcion;
	
	
	//opciones de los menus
	string opcMenu="";
	string opP="";
	bool opcP=true;
	
	do{ // ciclo general
		try{
			system("cls");
			cout<<"\tMenu Principal \n";
			cout<<"1. Pacientes\n";
			cout<<"2. Especialidades\n";
			cout<<"3. Doctores\n";
			cout<<"4. Pabellones y camas"<<endl;
			cout<<"5. Cargar archivo"<<endl;
			cout<<"6. Salir\n";
			getline(cin,opcMenu);
			if(opcMenu!="1"&&opcMenu!="2"&&opcMenu!="3"&&opcMenu!="4"&&opcMenu!="5"){
				throw opcMenu;
			}
			switch(stoi(opcMenu)){
			case 1:{
				do{//menu de los pacientes
					system("cls");
					try{
						system("cls");
						cout<<"Esta Es La opción 1,Pacientes\n";
						cout<<"Digite la opcion que desea realizar"<<endl;
						cout<<"1. Ingresar paciente\n";
						cout<<"2. Mostrar paciente\n";
						cout<<"3. Eliminar paciente\n";
						cout<<"4. Salir\n";
						getline(cin,opP);
						if(opP!="1"&&opP!="2"&&opP!="3"&&opP!="4"){
							throw opP;
						}
						switch(stoi(opP)){
						case 1:{
							cout<<"Digite el nombre"<<endl;
							cin>>nombre;
							cout<<"Digite el apellido"<<endl;
							cin>>apellido;
							cout<<"Digite la cedula"<<endl;
							cin>>cedula;
							cout<<"Digite la direccion"<<endl;
							cin>>direccion;
							cout<<"Digite la patologia"<<endl;
							cin>>patologia;
							cout<<"Digite el tipo de cirugia"<<endl;
							cin>>tipoCirugia;
							cout<<"Digite la prioridad"<<endl;
							cin>>prioridad;
							cout<<"Digite la fecha de la cirugia"<<endl;
							cin>>fechaCirugia;
							cout<<"Digite la cama"<<endl;
							cin>>cama;
							cout<<"Digite el nombre del doctor"<<endl;
							cin>>doctor;
							Paciente *p=new Paciente(nombre,apellido,direccion,cedula,patologia,tipoCirugia,prioridad,fechaCirugia,cama,doctor);
							ListPaciente->agregaralFinal(p);
							opcP=true;
							system("pause");
							break;
						}
						case 2:{
								system("cls");
								int opmostrar=0;
								cout<<"Digite una opcion "<<endl;
								cout<<"1.Mostrar todos "<<endl;
								cout<<"2.Mostrar por cedula"<<endl;
								cin>>opmostrar;
								switch(opmostrar){
								case 1:{
									cout<<ListPaciente->mostrartodos();
									break;
								}
								case 2:{
										
										cout<<"Digite la cedula de la persona que esta buscando"<<endl;
										cin>>cedula;
										cout<<ListPaciente->mostrarporcedula(cedula);
										break;
									}
								}
								//								
								
								system("pause");
								
								opcP=true;
								break;
							}
						case 3:{
									cout<<"Digite la cedula del paciente"<<endl;
									cin>>cedula;
									ListPaciente->eliminar(cedula);
									break;
								}
						case 4:{
										system("cls");
										cout<<"Saliendo"<<endl;
										system("pause");
										opcP=false;
										break;
									}
						}// fin del switch de opP
					}catch(string opP){
						cout<<"Error, digite una opción correcta\n";
						system("pause");
					}
				}while(opcP!=false);
				break;
			}//fin del case 1
			case 2:{
					system("cls");
					bool opE=true;
					string opEs;
					do{// menu de las especialidades 
						try{
							system("cls");
							cout<<"Esta Es La opción 1,Pacientes\n";
							cout<<"Digite la opcion que desea realizar"<<endl;
							cout<<"1. Ingresar especialidad\n";
							cout<<"2. Mostrar especialidad\n";
							cout<<"3. Eliminar especialidad\n";
							cout<<"4. Salir\n";
							getline(cin,opEs);
							if(opEs!="1"&&opEs!="2"&&opEs!="3"&&opEs!="4"){
								throw opEs;
							}
							switch(stoi(opEs)){
								
							case 1:{
								system("cls");				
								cout<<"Escriba la especialidad que desea registrar"<<endl;
								cin>>espec;
								cout<<"Ingrese el codigo"<<endl;
								cin>>codigo;
								cout<<"INgrese la descripcion de la especialidad"<<endl;
								cin>>descripcion;
								Especialidad *esp=new Especialidad(espec,codigo,descripcion);
								listEspec->agregaralFinal(esp);
								
								opE=true;
								break;
							}//llave del case 1
								
							case 2:{
									
									system("pause");
									opE=true;
									break;	
								}//llave del case 2
							case 3:{
										opE=true;
										break;	
									}//llave del case 3
							case 4:{
											opE=false;
											break;
										}//llave del case 4
							}//llave del switch Especialidad
						}
						catch(string opEs){
							system("cls");
							cout<<"Error, Opción no válida\n";
							system("pause");
						}
					} while(opE!=false);
					system("pause");
					break;
				}//fin del case 2
			case 3:{
						system("cls");
						string opD;
						bool opDc=true;
						do{
							try{
								system("cls");
								cout<<"Esta Es La opción 3, Doctores\n";
								cout<<"Digite la opcion que desea realizar"<<endl;
								cout<<"1. Ingresar Doctor\n";
								cout<<"2. Mostrar Doctor\n";
								cout<<"3. Eliminar Doctor\n";
								cout<<"4. Salir\n";
								getline(cin,opD);
								if(opD!="1"&&opD!="2"&&opD!="3"&&opD!="4"){
									throw opD;
								}
								switch(stoi(opD)){
								case 1:{
									system("cls");		
									cout<<"Digite el nombre"<<endl;
									cin>>nombre;
									cout<<"Digite el apellido"<<endl;
									cin>>apellido;
									cout<<"Digite la cedula"<<endl;
									cin>>cedula;
									cout<<"Digite la especialidad en la que desea registrar el doctor"<<endl;
									cin>>espec;
									Doctor *doc=new Doctor(nombre,apellido,cedula,espec);
									lisDoc->agregaralfinal(doc);
									
									opDc=true;
									break;
								}//llave del case 1
									
								case 2:{
										int opmostrar=0;
										cout<<"Digite una opcion "<<endl;
										cout<<"1.Mostrar todos "<<endl;
										cout<<"2.Mostrar por cedula"<<endl;
										cin>>opmostrar;
										switch(opmostrar){
										case 1:{
											cout<<lisDoc->mostrartodos();
											system("pause");
											break;
										}
										case 2:{
												cout<<"Digite la cedula de la persona que esta buscando"<<endl;
												cin>>cedula;
												cout<<lisDoc->mostrarporcedula(cedula);
												system("pause");
												break;
											}
										}
										opDc=true;
										break;	
									}//llave del case 2
								case 3:{
											opDc=true;
											break;	
										}//llave del case 3
								case 4:{
												opDc=false;
												break;
											}//llave del case 4
								}//llave del switch Especialidad
							}
							catch(string opD){
								system("cls");
								cout<<"Error, Opción no válida\n";
								system("pause");
							}
						} while(opDc!=false);
						
						
						system("pause");
						break;
					}//fin del case 3
			case 4:{
							//							
							string letra;
							string genero;
							
							string opcpabellon;
							bool opPabellon;
							int i=0;
							
							
							do{
								system("cls");
								try{
									cout<<"\n    MENU PABELLONES Y CAMAS"<<endl;
									cout<<"1.Ingresar pabellones."<<endl;
									cout<<"2.Mostrar pabellones."<<endl;
									cout<<"3.Ingresar camas a los pabellones                      "<<endl;
									cout<<"4.Mostrar camas ."<<endl;
									cout<<"5.Informe de pabellones y camas."<<endl;
									cout<<"6.Salir."<<endl;
									cout<<"Digite la opcion que desea realizar."<<endl; 
									getline(cin,opcpabellon);
									
									if(opcpabellon!="1"&&opcpabellon!="2"&&opcpabellon!="3"&&opcpabellon!="4"&&opcpabellon!="5"&&opcpabellon!="6"){
										throw opcpabellon;
									}
									
									
									switch(stoi(opcpabellon)){
									case 1:{
										cout<<"Digite una letra para crear el pabellon"<<endl;
										cin>>letra;
										do{
											cout<<"Digite la letra del sexo:  M para Masculino"<<endl;
											cout<<"                           F para Femenino"<<endl;
											cin>>genero;
											if (genero == "M" || genero == "F") {
												i=1;
											}else{
												cout<<"Opcion incorrecta"<<endl;
												system("pause");
											}
										}while(i!=1);
										break;
									}
									case 2:{
											cout<<"PABELLONES"<<endl;
											system("pause");
											break;
										}	
									case 3:{
												cout<<"Digite la letra del pabellon "<<endl;
												cin>>letra;
												system("pause");
												
												
												
												break;
											}
									case 4:{
													cout<<"Camas "<<endl;												
													system("pause");
													break;
												}
									case 5:{
														
														
														
														break;
													}
									case 6:{
															string opc;
															do{
																system("cls");
																try{
																	cout<<"Esta Seguro Que quiere salir\n"
																		<<"1. Si \n"
																		<<"2. No\n";
																	getline(cin,opc);	
																	if(opc!="1"&&opc!="2"){
																		throw opc;
																	}
																	
																	if(opc=="1"){
																		cout<<"Esta Apunto de salir del programa, ";
																		system("pause");
																		exit(0);
																	}else{
																		if(opc=="2"){
																			break;
																		}else{
																			throw opc;
																		}
																		
																	}	
																	
																}catch(string opc){
																	system("cls");
																	cout<<"Error, digite una opción correcta\n";
																	system("pause");
																}								
															}while(true);		
															
															
															break;
														}
									}// llave del swicth
								}catch(string opcpabellon){
									system("cls");
									cout<<"Error, digite una opción correcta\n";
									system("pause");
								}								
							}while(true);
							
							
							
							
							
							
						}// fin del case 4
			case 5:{
								char cadena [200];
								ifstream docum ("AdminArchivos.txt");
								while (!docum.eof()){
									docum.getline(cadena, sizeof (cadena));
									cout<<cadena<<endl;
								}
								docum.close();
								system("PAUSE");
								break;	
							}//fin del case 5
			case 6:{
								
								string opc="";
								system("cls");
								
								do{
									system("cls");
									try{
										cout<<"Esta Seguro Que quiere salir\n"
											<<"1. Si \n"
											<<"2. No\n";
										getline(cin,opc);	
										if(opc!="1"&&opc!="2"){
											throw opc;
										}
										
										if(opc=="1"){
											cout<<"Esta Apunto de salir del programa, ";
											system("pause");
											exit(0);
										}else{
											if(opc=="2"){
												break;
											}else{
												throw opc;
											}
											
										}	
										
									}catch(string opc){
										system("cls");
										cout<<"Error, digite una opción correcta\n";
										system("pause");
									}								
								}while(true);
								break;
								
							}//fin del case 6
			}//fin del switch
			
		}//fin del try
		catch(string opcMenu){
			system("cls");
			cout<<"Error, Opción no válida\n";
			system("pause");
		}//fin del catch
	} while(true);
	
		
		AdminArchivos *adArch = new AdminArchivos();
		adArch->Abrir();
		for(int i=0;i<2;i++) {
			adArch->Escribir(ListPaciente);
			adArch->Cerrar();
		}
		
	
	return 0;
}
