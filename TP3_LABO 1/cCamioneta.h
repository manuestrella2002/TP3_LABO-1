#pragma once
#include<string>
#include "cVehiculo.h"
class cCamioneta : public cVehiculo
{
	int sillas_seguridad;
	int portaequipaje;

public:
	cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, int sillas_, int portaeq_);
	~cCamioneta();

	int Get_sillas();
	int GetPortaequipaje();
	void Imprimir();
	string To_String();
};

