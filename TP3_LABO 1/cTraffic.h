#pragma once
#include "cVehiculo.h"
class cTraffic : public cVehiculo
{
public:

	cTraffic(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia);
	~cTraffic();

	string To_String();
	void Imprimir();


};

