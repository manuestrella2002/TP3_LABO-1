#include "cTraffic.h"

cTraffic::cTraffic(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base) : cVehiculo(patente_, color_, Num_chasis, poliza_,tarifa_dia, tarifa_Base)
{
}

cTraffic::~cTraffic()
{
}

string cTraffic::To_String()
{
	return string();
}

void cTraffic::Imprimir()
{
}
