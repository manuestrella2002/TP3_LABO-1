#pragma once
#include<iostream>
#include<string>
#include"cCliente.h"
#include <ctime>
#include "cVehiculo.h"
using namespace std;
class cAlquiler
{
	unsigned int Cant_asiento_rebatible, Cant_cascos, Cant_portaequipaje,  Cant_silla_seguridad, dias_alquiler;
	float precio_ar, precio_cascos, precio_portaequipaje, precio_ss;
	float MontoTotal;
	cCliente* Cliente;
	tm* Fecha_Fin;
	tm* Fecha_Inicio;
	cVehiculo* Vehiculo;
	string cod;
	
public:
	cAlquiler(cVehiculo* vehiculo_, string codigo,cCliente* cliente_, tm* f_inicio, unsigned int dias_alquiler_);
	~cAlquiler();

	string getclave();
	
	string To_String();

	void Imprimir();

};

