#pragma once
#include "cListaT.h"

class cEmpresa
{
	
	string Direccion;
	string Nombre;
	cListaT <cAlquiler>* ListaAlquileres;
	cListaT <cVehiculo>* ListaVehiculos;
	cListaT <cCliente>* ListaClientes;

public:
	cEmpresa(string nom, string direccion_);
	~cEmpresa();

	void RegistrarCliente(cCliente* Cliente);
	void AdquirirVehiculo(cVehiculo* Vehiculo);
	void RealizarMantenimiento(cVehiculo* Vehiculo);
	void RetirarVehiculo(cVehiculo* Vehiculo);
	void RegistarAlquiler(cAlquiler* Alquiler);

	string To_String();
	void Imprimir();

	


};

