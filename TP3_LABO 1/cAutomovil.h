#pragma once
#include <iostream>
#include "cVehiculo.h"
using namespace std;

class cAutomovil : public cVehiculo
{
	unsigned int cant_silla_seguridad;

public:
	cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, float alquiler_dia, float tarifa_dia, float tarifa_Base, unsigned int sillas);

	void Imprimir();
	string To_String();
};

