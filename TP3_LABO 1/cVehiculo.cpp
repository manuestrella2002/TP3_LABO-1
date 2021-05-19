#include "cVehiculo.h"

cVehiculo::cVehiculo(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base) : Patente(patente_), color(color_), Nro_chasis(Num_chasis), Poliza(poliza_), Tarifa_por_dia(tarifa_dia), Tarifa_base(tarifa_Base)
{
	Patente = patente_;
	color = color_;
	Nro_chasis = Num_chasis;
	Poliza = poliza_;
	Tarifa_por_dia = tarifa_dia;
	Tarifa_base = tarifa_Base;
}
