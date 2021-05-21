#include "cAlquiler.h"

cAlquiler::cAlquiler(cVehiculo* vehiculo_, cCliente* cliente_, tm f_inicio, tm f_final)
{
	Vehiculo = vehiculo_;
	Cliente = cliente_;
	Fecha_Inicio = f_inicio;
	Fecha_Fin = f_final;
	//Monto_Total = CalcularMonto();//FALTA HACER FUNCIO CALCULAR MONTO

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
	string cadena;
	char buffer1[80];
	char buffer2[80];
	strftime(buffer1, 80, "%D", Fecha_Inicio);
	strftime(buffer2, 80, "%D", Fecha_Fin);

	cadena = "\n\tALQUILER" + Cliente->To_String() + "\nFecha de Inicio: "
		+ buffer1 + "\nFecha Fin: " + buffer2 + Vehiculo->To_String()
		+ "\nMonto Total:" + to_string(Monto_Total) + "\nArticulos alquilados:"
		+ "\nAsientos Rebatibles:" + to_string(Cant_asiento_rebatible)
		+ "\nCascos:" + to_string(Cant_cascos)
		+ "\nPortaequipajes:" + to_string(Cant_portaequipaje)
		+ "\nSillas Seguridad:" + to_string(Cant_silla_seguridad);
		
	return cadena;
}

void cAlquiler::Imprimir()
{
	cout << To_String() << endl;
}
