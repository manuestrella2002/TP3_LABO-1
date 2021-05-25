#include "cAutomovil.h"

cAutomovil::cAutomovil(string patente_, string color_, string Num_chasis, string poliza_, int sillas_) : cVehiculo(patente_, color_, Num_chasis, poliza_)
{
	sillas_seguridad = sillas_;
	Cap_pasajeros = 5;
	Tarifa_por_dia = 200;
}
cAutomovil::~cAutomovil()
{
}
int cAutomovil::Get_sillas()
{
	return sillas_seguridad;
}

void cAutomovil::Imprimir()
{
	cVehiculo::Imprimir();
}

string cAutomovil::To_String()
{
	char buffer1[80];
	strftime(buffer1, 80, "%F", Fecha_ult_mant);
	string cadena = "\nAUTOMOVIL:\nPatente: " + Patente + "\nCapacidad de pasajeros:" + to_string(Cap_pasajeros)
		+ "\nColor: " + color + "\nNumero de chasis: " + Nro_chasis + "\t Poliza: " + Poliza +
		"\nFecha de ultimo mantenimiento: " +buffer1+
		"\nTarifa Base: " + to_string(Tarifa_base) + "\t Tarifa por dia: " + to_string(Tarifa_por_dia);
	return cadena;
}

