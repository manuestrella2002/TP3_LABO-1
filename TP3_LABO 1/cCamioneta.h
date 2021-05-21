#pragma once
#include<string>
#include "cVehiculo.h"
class cCamioneta : public cVehiculo
{

public:
	cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia);
	~cCamioneta();

	void Imprimir();
	string To_String();
};

