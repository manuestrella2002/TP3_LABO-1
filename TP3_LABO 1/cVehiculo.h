#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class cVehiculo
{
protected:
	string Patente;
	unsigned int Cap_pasajeros;
	string color, Nro_chasis, Poliza;
	tm Fecha_ult_mant;
	float Tarifa_por_dia;
	 float Tarifa_base;

public:
	cVehiculo(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia,float tarifa_Base);

	void PasosMantenimiento();
	void Imprimir();
	string To_String();

};

