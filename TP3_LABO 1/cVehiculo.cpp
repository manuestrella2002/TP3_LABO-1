#include "cVehiculo.h"

cVehiculo::cVehiculo(string patente_, string color_, string Num_chasis, string poliza_) : Patente(patente_), color(color_), Nro_chasis(Num_chasis), Poliza(poliza_)
{
	Patente = patente_;
	color = color_;
	Nro_chasis = Num_chasis;
	Poliza = poliza_;
	Tarifa_base = 300;
	// CalcularMonto();//FALTA HACER FUNCIO CALCULAR MONTO
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
/*
void cVehiculo::CalcularMonto()
{
	Monto_Total = Tarifa_base + Tarifa_por_dia;
}
float cVehiculo::GetMontoT()
{
	return Monto_Total;
}
*/
string cVehiculo::To_String()
{
	return string();
}
void cVehiculo::Imprimir()
{
	cout << To_String() << endl;
}
