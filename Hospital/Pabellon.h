#ifndef PABELLON_H
#define PABELLON_H
#include <iostream>
#include <sstream>
using namespace std;
class Pabellon {
public:
	Pabellon();
	Pabellon(string nombre);
	~Pabellon();
	void setGenero(string);
	string getGenero();
	void setNombre(string);
	string getNombre();
	string toString();
private:
	string nombre;
	string genero;
	int cant;
};
#endif
