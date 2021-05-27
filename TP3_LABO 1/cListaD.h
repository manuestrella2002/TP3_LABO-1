#pragma once
#include "cListaT.h"

class cListaD : public cListaT<class cVehiculo>
{
public:
	cListaD(unsigned int TAM=NMAX);
	~cListaD();

	void Listar_por_Vehiculo();
	
	float Ganancia_Total();
	
	friend class cEmpresa;
};

