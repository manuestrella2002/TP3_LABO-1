#pragma once
#include "cVehiculo.h"
class cMotocicleta : public cVehiculo
{

public:
	cMotocicleta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base);

	void Imprimir();
	string To_String();
};

