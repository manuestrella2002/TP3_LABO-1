#pragma once
#include "cVehiculo.h"
class cTraffic : public cVehiculo
{
	int sillas_seguridad;
	int asiento_auxiliar;
public:

	cTraffic(string patente_, string color_, string Num_chasis, string poliza_, int sillas_, int asientos_);
	~cTraffic();

	int GetSillas();
	int GetAsientos();
	string To_String();
	void Imprimir();

	friend class cAlquiler;

};