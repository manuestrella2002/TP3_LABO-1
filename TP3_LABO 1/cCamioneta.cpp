#include "cCamioneta.h"

cCamioneta::cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia, float tarifa_Base) : cVehiculo(patente_, color_, Num_chasis, poliza_, tarifa_dia, tarifa_Base)
{
}

cCamioneta::~cCamioneta()
{
}

void cCamioneta::Imprimir()
{
	cout << To_String() << endl;
}

string cCamioneta::To_String()
{
	string cadena = "\nCAMIONETA:\nPatente: " + Patente + "\nCapacidad de pasajeros:" + to_string(Cap_pasajeros)
		+ "\nColor: " + color + "\nNumero de chasis: " + Nro_chasis + "\t Poliza: " + Poliza +
		"\nFecha de ultimo mantenimiento: " + to_string(Fecha_ult_mant.tm_wday) + "/" + to_string(Fecha_ult_mant.tm_mon) + "/" + to_string(Fecha_ult_mant.tm_year) +
		"\nTarifa Base: " + to_string(Tarifa_base) + "\t Tarifa por dia: " + to_string(Tarifa_por_dia);
	return cadena;
}
