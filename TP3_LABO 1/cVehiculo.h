#pragma once
#include <iostream>
#include<string>
#include <ctime>
using namespace std;

class cVehiculo
{
protected:
	string Patente;
	unsigned int Cap_pasajeros;
	string color, Nro_chasis, Poliza;
	tm* Fecha_ult_mant;
	float Tarifa_por_dia;
	float Tarifa_base;
	bool limpio;
	float Monto_Total;

public:
	cVehiculo(string patente_, string color_, string Num_chasis, string poliza_, float tarifa_dia);
	~cVehiculo();
	string getclave();

	void PasosMantenimiento();
	void CalcularMonto();
	float GetMontoT();
	virtual void Imprimir();
	virtual string To_String() = 0;

	friend class cEmpresa;
};

