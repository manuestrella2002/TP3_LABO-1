#pragma once
#include "cVehiculo.h"
using namespace std;

class cAutomovil : public cVehiculo
{
	int sillas_seguridad;

public:
	using cVehiculo::Imprimir;
	
	cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, int sillas_);
	~cAutomovil();

	int Get_sillas();

	virtual void Imprimir();

	virtual string To_String();

	friend class cAlquiler;
};

