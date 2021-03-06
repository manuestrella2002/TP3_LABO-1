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
	Monto_Total = CalularMonto();
	//Calculamos fecha final con la fecha de inicio mas los dias de alquiler
	Fecha_Fin=CalcularFechaFin();
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
	float aux;
		//Utilizamos dinamic cast para ver de que tipo de clase era cada vehiculo 
		//ya que tiene diferentes adicionales cada uno
		if (cAutomovil* Auto = dynamic_cast<cAutomovil*>(Vehiculo))
		{ 
			aux=(Auto->Tarifa_base) + Auto->Tarifa_por_dia * dias_alquiler + precio_ss * Auto->sillas_seguridad * dias_alquiler;
			Auto->Monto_Total1 = aux;
			return aux;
		}
		else if (cCamioneta* Camioneta = dynamic_cast<cCamioneta*>(Vehiculo))
		{ 
			aux= (Camioneta->Tarifa_base) + Camioneta->Tarifa_por_dia * dias_alquiler + precio_ss * Camioneta->sillas_seguridad * dias_alquiler + precio_portaequipaje * Camioneta->portaequipaje * dias_alquiler;
			Camioneta->Monto_Total1 = aux;
			return aux;
		}
		else if (cTraffic* Traffic = dynamic_cast<cTraffic*>(Vehiculo))
		{
			aux=(Traffic->Tarifa_base) + Traffic->Tarifa_por_dia * dias_alquiler + precio_ss * Cant_silla_seguridad * dias_alquiler;
			Traffic->Monto_Total1 = aux;
			return aux;;

		}
		else if (cMotocicleta* Moto = dynamic_cast<cMotocicleta*>(Vehiculo))
		{
			aux=(Moto->Tarifa_base) + Moto->Tarifa_por_dia * dias_alquiler + precio_ss * Cant_silla_seguridad * dias_alquiler;
			Moto->Monto_Total1 = aux;
			return aux;
		}
	
	return 0;
}

string cAlquiler::To_String()
{
	string cadena;
	
	char buffer1[80];
	char buffer2[80];
	strftime(buffer1, 80, "%D", Fecha_Inicio);
	strftime(buffer2, 80, "%D", Fecha_Fin);
	
	cadena = "\n\tALQUILER" + Cliente->To_String() +"\nFecha de inicio del alquiler: " + buffer1 + "\n Fecha devolucion: " +buffer2+ "\nMonto Total:" + to_string(Monto_Total) + "\nArticulos alquilados:"
		+"\nDias Alquiler:"+to_string(dias_alquiler)
		+ "\nAsientos Rebatibles:" + to_string(Cant_asiento_rebatible)
		+ "\nCascos:" + to_string(Cant_cascos)
		+ "\nPortaequipajes:" + to_string(Cant_portaequipaje)
		+ "\nSillas Seguridad:" + to_string(Cant_silla_seguridad);
	
	return cadena;


}
//Sumamos dias de alquiler a fecha inicio para obtener fecha fin
tm* cAlquiler::CalcularFechaFin()
{

	time_t aux = time(NULL);

	Fecha_Fin = Fecha_Inicio;
	tm* aux3 = Fecha_Inicio;
	aux3->tm_mday = Fecha_Inicio->tm_mday + dias_alquiler;
	Fecha_Fin = aux3;

	aux= mktime(Fecha_Fin);

	time_t* aux1 = &aux;
	Fecha_Fin = localtime(aux1);
	return Fecha_Fin;

}

void cAlquiler::Imprimir()
{
	cout << To_String() << endl;
}
