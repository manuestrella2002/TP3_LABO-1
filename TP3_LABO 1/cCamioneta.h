#pragma once
#include "cVehiculo.h"
class cCamioneta : public cVehiculo
{
	unsigned int Cant_silla_seguridad;
	bool Portaequipaje;

public:
	cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float alquiler_dia, float tarifa_dia, float tarifa_Base, unsigned int sillas, bool portaequipaje_);

	void Imprimir();
	string To_String();
};

