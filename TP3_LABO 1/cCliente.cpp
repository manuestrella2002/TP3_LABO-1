#include "cCliente.h"

cCliente::cCliente(string Nombre_, string Apellido_, const string DNI_) : DNI(DNI_)
{
	Nombre = Nombre_;
	Apellido = Apellido_;
}

cCliente::~cCliente()
{
}

string cCliente::To_String()
{
	string cadena = "\nCLIENTE: \nNombre: " + Nombre + "\nApellido: " + Apellido +
		"\n DNI: " + DNI;
	return cadena;
}

void cCliente::Imprimir()
{
	cout << To_String() << endl;
}
