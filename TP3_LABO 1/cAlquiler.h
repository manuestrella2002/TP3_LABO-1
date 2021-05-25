#pragma once
#include<iostream>
#include<string>
#include"cCliente.h"
#include <ctime>
#include"cAutomovil.h"
#include"cCamioneta.h"
#include"cMotocicleta.h"
#include"cTraffic.h"
using namespace std;
template<class cAlquiler>class cListaT;

class cAlquiler
{
protected:
	unsigned int Cant_asiento_rebatible, Cant_cascos, Cant_portaequipaje,  Cant_silla_seguridad, dias_alquiler;
	float precio_ar, precio_cascos, precio_portaequipaje, precio_ss;
	float MontoTotal;
	cCliente* Cliente;
	tm* Fecha_Fin;
	tm* Fecha_Inicio;
	cVehiculo* Vehiculo;
	string cod;
	float Monto_Total;
	
public:
	cAlquiler(cVehiculo* vehiculo_, string codigo,cCliente* cliente_, tm* f_inicio, unsigned int dias_alquiler_);
	~cAlquiler();
	

	string getclave();
	float CalularMonto();
	string To_String();

	tm* CalcularFechaFin();

	void Imprimir();

	

};

