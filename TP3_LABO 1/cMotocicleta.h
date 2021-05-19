#pragma once
#include "cVehiculo.h"
class cMotocicleta : public cVehiculo
{
	unsigned int Cant_cascos;

public:
	cMotocicleta(string patente_, string color_, string Num_chasis, string poliza_, float alquiler_dia, float tarifa_dia, float tarifa_Base, unsigned int cascos);

	void Imprimir();
	string To_String();
};

