#pragma once
#include "cVehiculo.h"
class cMotocicleta : public cVehiculo
{
	int Cascos;

public:
	cMotocicleta(string patente_, string color_, string Num_chasis, string poliza_, int cascos_);
	~cMotocicleta();

	int GetCascos();
	void Imprimir();
	string To_String();
	friend class cAlquiler;

};

