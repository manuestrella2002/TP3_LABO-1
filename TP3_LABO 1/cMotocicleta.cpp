#include "cMotocicleta.h"

cMotocicleta::cMotocicleta(string patente_, string color_, string Num_chasis, string poliza_, float alquiler_dia, float tarifa_dia, float tarifa_Base, unsigned int cascos) : cVehiculo(patente_, color_, Num_chasis, poliza_, alquiler_dia, tarifa_dia, tarifa_Base)
{
	Cant_cascos = cascos;
}
