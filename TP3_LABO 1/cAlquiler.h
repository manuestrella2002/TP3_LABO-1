#pragma once
#include<iostream>
#include<string>
#include"cCliente.h"
#include <ctime>
#include "cVehiculo.h"
using namespace std;
class cAlquiler
{
	unsigned int Cant_asiento_rebatible;
	unsigned int Cant_cascos;
	unsigned int Cant_portaequipaje;
	unsigned int Cant_silla_seguridad;
	unsigned int dias_alquiler;
	cCliente* Cliente;
	tm* Fecha_Fin;
	tm* Fecha_Inicio;
	float Monto_Total;
	cVehiculo* Vehiculo;
	string cod;
	
public:
	cAlquiler(cVehiculo* vehiculo_, string codigo,cCliente* cliente_, tm* f_inicio, unsigned int dias_alquiler_);
	~cAlquiler();

	float CalcularMonto();
	string getclave();
	
	string To_String();

	void Imprimir();

};

