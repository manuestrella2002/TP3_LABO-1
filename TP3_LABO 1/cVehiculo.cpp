#include "cVehiculo.h"

cVehiculo::cVehiculo(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia) : Patente(patente_), color(color_), Nro_chasis(Num_chasis), Poliza(poliza_), Tarifa_por_dia(tarifa_dia)
{
	Patente = patente_;
	color = color_;
	Nro_chasis = Num_chasis;
	Poliza = poliza_;
	Tarifa_por_dia = tarifa_dia;
	
}

cVehiculo::~cVehiculo()
{
}

string cVehiculo::getclave()
{
	return Patente;
}

void cVehiculo::PasosMantenimiento()
{
	cout << "LISTA DE PASOS MANTENIMIENTO" << endl;
	cout << "1)Se limpia el auto por fuera y por dentro." << endl;
	cout << "2)Se establece fecha de ultimo mantenimiento." << endl;
	cout << "3)Revision de componentes por el mecanico" << endl;
}

string cVehiculo::To_String()
{
	return string();
}
void cVehiculo::Imprimir()
{

}
