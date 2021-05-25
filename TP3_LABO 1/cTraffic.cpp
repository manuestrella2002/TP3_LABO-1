#include "cTraffic.h"

cTraffic::cTraffic(string patente_, string color_, string Num_chasis, string poliza_, int sillas_, int asientos_) : cVehiculo(patente_, color_, Num_chasis, poliza_)
{
	sillas_seguridad = sillas_;
	asiento_auxiliar = asientos_;
	Cap_pasajeros = 8;
	Tarifa_por_dia = 300;
}

cTraffic::~cTraffic()
{
}

int cTraffic::GetSillas()
{
	return sillas_seguridad;
}

int cTraffic::GetAsientos()
{
	return asiento_auxiliar;
}

string cTraffic::To_String()
{
	char buffer1[80];
	strftime(buffer1, 80, "%D", Fecha_ult_mant);
	string cadena = "\nTRAFFIC:\nPatente: " + Patente + "\nCapacidad de pasajeros:" + to_string(Cap_pasajeros)
		+ "\nColor: " + color + "\nNumero de chasis: " + Nro_chasis + "\t Poliza: " + Poliza +
		"\nFecha de ultimo mantenimiento: " +buffer1+"\nTarifa Base: " + to_string(Tarifa_base) + "\t Tarifa por dia: " + to_string(Tarifa_por_dia);
	return cadena;
}

void cTraffic::Imprimir()
{
	cVehiculo::Imprimir();

}
