#ifndef CAMA_H
#define CAMA_H
#include<iostream>
#include <sstream>
using namespace std;
class Cama {
public:
	Cama();
	Cama(string nombre);
	void setNombre(string);
	string getNombre();
	string toString();
	bool estado();
	~Cama();
private:
	string nombre;
};

#endif

