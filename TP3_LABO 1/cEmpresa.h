#pragma once
#include"cAlquiler.h"

class cEmpresa
{
	
	string Direccion;
	string Nombre;
	cAlquiler* ListaAlquileres;
	cCliente* ListaClientes;
	cVehiculo* ListaVehiculos;

public:
	cEmpresa();
	~cEmpresa();
	void AdquirirVehiculo(cVehiculo Vehiculo);
	void RealizarMantenimiento(cVehiculo Vehiculo);
	void RetirarVehiculo(cVehiculo Vehiculo);
	string To_String();
	void Imprimir();



};

