#include "cAutomovil.h"

cAutomovil::cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base) : cVehiculo(patente_, color_, Num_chasis, poliza_, tarifa_dia, tarifa_Base)
{
	Patente = patente_;
	color = color_;
	Nro_chasis = Num_chasis;
	Poliza = poliza_;
	Tarifa_por_dia = tarifa_dia;
	Tarifa_base = tarifa_Base;
}

cAutomovil::~cAutomovil()
{
}

void cAutomovil::Imprimir()
{
}

string cAutomovil::To_String()
{
	return string();
}
