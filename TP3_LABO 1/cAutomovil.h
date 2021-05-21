#pragma once
#include <iostream>
#include <string>
#include "cVehiculo.h"
using namespace std;

class cAutomovil : public cVehiculo
{

public:
	cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia);
	~cAutomovil();

	void Imprimir();
	string To_String();
};

