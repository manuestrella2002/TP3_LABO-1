#include "cEmpresa.h"

cEmpresa::cEmpresa(string nom, string direccion_)
{
	Nombre = nom;
	Direccion = direccion_;
}

cEmpresa::~cEmpresa()
{
}

void cEmpresa::RegistrarCliente(cCliente* Cliente)
{
	ListaClientes->AgregarItem(Cliente);
}

void cEmpresa::AdquirirVehiculo(cVehiculo* Vehiculo)
{
	ListaVehiculos->AgregarItem(Vehiculo);
}

void cEmpresa::RealizarMantenimiento(cVehiculo* Vehiculo)
{
	Vehiculo->limpio = true;
	time_t aux = time(NULL);
	time_t* aux1 = &aux;
	Vehiculo->Fecha_ult_mant = localtime(aux1);

}

void cEmpresa::RetirarVehiculo(cVehiculo* Vehiculo)
{
	ListaVehiculos->Quitar(Vehiculo);
}

void cEmpresa::RegistarAlquiler(cAlquiler* Alquiler)
{
	ListaAlquileres->AgregarItem(Alquiler);
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
