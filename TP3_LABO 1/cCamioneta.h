#pragma once
#include "cVehiculo.h"
class cCamioneta : public cVehiculo
{
	int sillas_seguridad;
	int portaequipaje;

public:
	cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, int sillas_, int portaeq_);
	~cCamioneta();

	int Get_sillas();
	int GetPortaequipaje();
	virtual void Imprimir();
	virtual string To_String();
	friend class cAlquiler;
	friend class cAlquiler;

};