#include "cEmpresa.h"

cEmpresa::cEmpresa(string nom, string direccion_)
{
	Nombre = nom;
	Direccion = direccion_;
	//Habia que iniciar las listas en el constructor
	ListaVehiculos = new cListaT<cVehiculo>;
	ListaAlquileres = new cListaT<cAlquiler>;
	ListaClientes = new cListaT<cCliente>;
}

cEmpresa::~cEmpresa()
{
}

void cEmpresa::RegistrarCliente(cCliente* Cliente)
{
	(*ListaClientes) + Cliente;//Se agregan cliente a la lista de clientes
}

void cEmpresa::AdquirirVehiculo(cVehiculo* Vehiculo)
{
	(*ListaVehiculos) + Vehiculo;//Se agregan vehiculo a la lista de vehiculos
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
	(*ListaAlquileres) + Alquiler;//Se agregan Alquiler a la lista de Alquileres
}

ostream& operator<<(ostream& out, const cEmpresa& e)
{
	cout << "\n\nEMPRESA: " << endl;
	cout << "Nombre: " << e.Nombre << endl;
	cout << "Direccion: " << e.Direccion << endl;
	cout << e.ListaAlquileres << endl;
	cout << e.ListaClientes << endl;
	cout << e.ListaVehiculos << endl;
	return out;
}
