#include "cCamioneta.h"

cCamioneta::cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia) : cVehiculo(patente_, color_, Num_chasis, poliza_, tarifa_dia)
{
	Tarifa_base = 800;
	Cap_pasajeros = 5;
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
	char buffer1[80];
	strftime(buffer1, 80, "%D", Fecha_ult_mant);
	string cadena = "\nCAMIONETA:\nPatente: " + Patente + "\nCapacidad de pasajeros:" + to_string(Cap_pasajeros)
		+ "\nColor: " + color + "\nNumero de chasis: " + Nro_chasis + "\t Poliza: " + Poliza +
		"\nFecha de ultimo mantenimiento: " + buffer1 +
		"\nTarifa Base: " + to_string(Tarifa_base) + "\t Tarifa por dia: " + to_string(Tarifa_por_dia);
	return cadena;
}
