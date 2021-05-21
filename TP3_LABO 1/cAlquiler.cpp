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

float cAlquiler::CalcularMonto()
{
	return 0.0f;
}

string cAlquiler::To_String()
{
	string cadena = "\nALQUILER:\nTipo de vehiculo: " + Vehiculo->To_String() + "\nCliente: " + Cliente->To_String()
		+ "\nFecha de inicio del alquiler: " + to_string(Fecha_Inicio.tm_wday) + "/" + to_string(Fecha_Inicio.tm_mon) + "/" + to_string(Fecha_Inicio.tm_year)
		+ "\n Fecha devolucion: " + to_string(Fecha_Fin.tm_wday) + "/" + to_string(Fecha_Fin.tm_mon) + "/" + to_string(Fecha_Fin.tm_year)
		+ "\nMonto total: " + to_string(Monto_Total);
	return cadena;
}

void cAlquiler::Imprimir()
{
	cout << To_String() << endl;
}
