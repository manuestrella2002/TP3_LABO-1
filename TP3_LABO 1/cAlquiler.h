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
	cCliente* Cliente;
	tm Fecha_Fin;
	tm Fecha_Inicio;
	float Monto_Total;
	cVehiculo Vehiculo;

public:
	cAlquiler();
	~cAlquiler();
	string To_String();
	void Imprimir();

};

