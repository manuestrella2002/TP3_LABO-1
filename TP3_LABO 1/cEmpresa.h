#pragma once
#include "cListaT.h"
#include"cAlquiler.h"
#include"cVehiculo.h"
#include"cCliente.h"
#include<string>

using namespace std;
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

	friend ostream& operator << (ostream& out, const cEmpresa& e);
};

