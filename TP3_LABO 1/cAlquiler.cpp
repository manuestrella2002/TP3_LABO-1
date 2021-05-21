#include "cAlquiler.h"

cAlquiler::cAlquiler(cVehiculo* vehiculo_, string codigo,cCliente* cliente_, tm* f_inicio, unsigned int dias_alquiler_)
{
	Vehiculo = vehiculo_;
	Cliente = cliente_;
	Fecha_Inicio = f_inicio;
	dias_alquiler = dias_alquiler_;
	cod = codigo;
	//precios de cada adicional que se usa
	precio_ar = 20;
	precio_cascos = 15;
	precio_portaequipaje = 30;
	precio_ss = 50;
}

cAlquiler::~cAlquiler()
{
}

string cAlquiler::getclave()
{
	return cod;
}

float cAlquiler::CalularMonto()
{
	//tendriamos que hacer el dynamic cast, y en cada caso ver que auxiliar usa para calcular 
	//el monto final de cada vehiculo en especifico + el monto del adicional
	//eso multiplicado los dias de alquiler
	//(Vehiculoespecifico).Getmonto() + tarifadicional
	//ya tenemos una tarifa por dia en vehiculo, no se como usar ambas 
	return 0.0f;
}

string cAlquiler::To_String()
{
	string cadena;
	
	char buffer1[80];
	char buffer2[80];
	strftime(buffer1, 80, "%D", Fecha_Inicio);
	strftime(buffer2, 80, "%D", Fecha_Fin);
	
	cadena = "\n\tALQUILER" + Cliente->To_String() +"\nFecha de inicio del alquiler: " + buffer1 + "\n Fecha devolucion: " +buffer2+ "\nMonto Total:" + to_string(Monto_Total) + "\nArticulos alquilados:"
		+ "\nAsientos Rebatibles:" + to_string(Cant_asiento_rebatible)
		+ "\nCascos:" + to_string(Cant_cascos)
		+ "\nPortaequipajes:" + to_string(Cant_portaequipaje)
		+ "\nSillas Seguridad:" + to_string(Cant_silla_seguridad);
	
	return cadena;

	/*
	string cadena = "\nALQUILER:\nTipo de vehiculo: " + Vehiculo->To_String() + "\nCliente: " + Cliente->To_String()
		+ "\nFecha de inicio del alquiler: " + to_string(Fecha_Inicio.tm_wday) + "/" + to_string(Fecha_Inicio.tm_mon) + "/" + to_string(Fecha_Inicio.tm_year)
		+ "\n Fecha devolucion: " + to_string(Fecha_Fin.tm_wday) + "/" + to_string(Fecha_Fin.tm_mon) + "/" + to_string(Fecha_Fin.tm_year)
		+ "\nMonto total: " + to_string(Monto_Total);
	return cadena;
	*/
}

void cAlquiler::Imprimir()
{
	cout << To_String() << endl;
}
