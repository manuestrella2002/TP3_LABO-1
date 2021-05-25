#pragma once
#include <iostream>
#include<string>
#include <ctime>
#include "time.h"
using namespace std;
template<class cVehiculo>class cListaT;

class cVehiculo
{
protected:
	string Patente;
	unsigned int Cap_pasajeros;
	string color, Nro_chasis, Poliza;
	tm* Fecha_ult_mant;
	float Tarifa_por_dia;
	float Tarifa_base;
	bool limpio;
	float Monto_Total;

public:
	cVehiculo(string patente_, string color_, string Num_chasis, string poliza_);
	~cVehiculo();
	virtual string getclave();

	void PasosMantenimiento();
	tm* CrearFecha();
	
	virtual void Imprimir() =0;
	virtual string To_String() = 0;

	friend class cEmpresa;
};

