#pragma once
#include<iostream>
using namespace std;
template<class cCliente>class cListaT;

class cCliente
{
	string Apellido;
	const string DNI;
	string Nombre;


public:
	cCliente(string Nombre_, string Apellido_, const string DNI_);
	~cCliente();
	
	string getclave();
	
	string To_String();
	void Imprimir();
};

