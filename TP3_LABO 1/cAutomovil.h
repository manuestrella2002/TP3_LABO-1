#pragma once
#include <iostream>
#include <string>
#include "cVehiculo.h"
using namespace std;

class cAutomovil : public cVehiculo
{
	int sillas_seguridad;

public:
	cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, int sillas_);
	~cAutomovil();

	int Get_sillas();
	void Imprimir();
	string To_String();
	friend class cAlquiler;
};