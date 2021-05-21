#include "cMotocicleta.h"

cMotocicleta::cMotocicleta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, int cascos_) : cVehiculo(patente_, color_, Num_chasis, poliza_, tarifa_dia)
{
	Cascos = cascos_;
	Tarifa_base = 150;
	Cap_pasajeros = 2;
}

cMotocicleta::~cMotocicleta()
{
}

int cMotocicleta::GetCascos()
{
	return Cascos;
}

void cMotocicleta::Imprimir()
{

}

string cMotocicleta::To_String()
{
	char buffer1[80];
	strftime(buffer1, 80, "%D", Fecha_ult_mant);
	string cadena = "\nMOTOCICLETA:\nPatente: " + Patente + "\nCapacidad de pasajeros:" + to_string(Cap_pasajeros)
		+ "\nColor: " + color + "\nNumero de chasis: " + Nro_chasis + "\t Poliza: " + Poliza +
		"\nFecha de ultimo mantenimiento: " + buffer1 +
		"\nTarifa Base: " + to_string(Tarifa_base) + "\t Tarifa por dia: " + to_string(Tarifa_por_dia);
	return cadena;
}
