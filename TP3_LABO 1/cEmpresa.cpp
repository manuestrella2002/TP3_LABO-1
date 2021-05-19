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
}

void cEmpresa::RealizarMantenimiento(cVehiculo* Vehiculo)
{
}

void cEmpresa::RetirarVehiculo(cVehiculo* Vehiculo)
{
}

string cEmpresa::To_String()
{
	return string();
}

void cEmpresa::Imprimir()
{
}
