#include "cAlquiler.h"

cAlquiler::cAlquiler(cVehiculo* vehiculo_, cCliente* cliente_, tm f_inicio, tm f_final)
{
	Vehiculo = vehiculo_;
	Cliente = cliente_;
	Fecha_Inicio = f_inicio;
	Fecha_Fin = f_final;
	Monto_Total = CalcularMonto();

}

cAlquiler::~cAlquiler()
{
}

float cAlquiler::CalucularMonto()
{
	return 0.0f;
}

string cAlquiler::To_String()
{
	return string();
}

void cAlquiler::Imprimir()
{
}
