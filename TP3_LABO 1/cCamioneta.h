#pragma once
#include "cVehiculo.h"
class cCamioneta : public cVehiculo
{

public:
	cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base);
	~cCamioneta();

	void Imprimir();
	string To_String();
};

