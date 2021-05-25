#include "cVehiculo.h"

cVehiculo::cVehiculo(string patente_, string color_, string Num_chasis, string poliza_) : Patente(patente_), color(color_), Nro_chasis(Num_chasis), Poliza(poliza_)
{
	Patente = patente_;
	color = color_;
	Nro_chasis = Num_chasis;
	Poliza = poliza_;
	Tarifa_base = 300;
	
	Fecha_ult_mant = CrearFecha();
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

tm* cVehiculo::CrearFecha()
{
	time_t aux = time(NULL);
	time_t* aux1 = &aux;
	tm* aux_dia;
	aux_dia = localtime(aux1);
	return aux_dia;
}

string cVehiculo::To_String()
{
	return string();
}
void cVehiculo::Imprimir()
{
}
