#pragma once
#include<iostream>
using namespace std;
class cCliente
{
	string Apellido;
	string DNI;
	string Nombre;


public:
	cCliente(string Nombre_, string Apellido_, string DNI);
	~cCliente();
	
	
	string To_String();
	void Imprimir();
};

