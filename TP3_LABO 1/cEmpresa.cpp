#include "cEmpresa.h"

cEmpresa::cEmpresa(string nom, string direccion_)
{
	Nombre = nom;
	Direccion = direccion_;
}

cEmpresa::~cEmpresa()
{
}

void cEmpresa::AdquirirVehiculo(cVehiculo* Vehiculo)
{
	ListaVehiculos->AgregarItem(Vehiculo);
}

void cEmpresa::RealizarMantenimiento(cVehiculo* Vehiculo)
{
}

void cEmpresa::RetirarVehiculo(cVehiculo* Vehiculo)
{
}

string cEmpresa::To_String()
{
	string cadena = "\nEMPRESA:\nNombre: " + Nombre + "\Direccion: " + Direccion;
	//las listas no porque ya se imprimen(?
	return cadena;
}

void cEmpresa::Imprimir()
{
	cout << To_String() << endl;
}
