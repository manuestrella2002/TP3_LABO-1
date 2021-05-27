#include "cListaD.h"
cListaD::cListaD(unsigned int TAM):cListaT(TAM)
{
}

cListaD::~cListaD()
{
}

void cListaD::Listar_por_Vehiculo()
{
	//Se utiliza dynamic cast y se recorre cuatro veces la lista para imprimir por tipo de vehiuclo
	cout << "\nLISTA DE VEHICULOS POR CATEGORIA" << endl;
	cout << "\nAUTOS-------------------------------" << endl;
		for (int i = 0; i < CA; i++)
		{
			if (cAutomovil* Auto = dynamic_cast<cAutomovil*>(vector[i]))
			{
				vector[i]->Imprimir();
			}
		}
		cout << "\nCAMIONETAS-------------------------------" << endl;

		for (int j = 0; j < CA; j++)
		{
			if (cCamioneta* Camioneta = dynamic_cast<cCamioneta*>(vector[j]))
			{
				vector[j]->Imprimir();
			}
		}
		cout << "\nTRAFFICS-------------------------------" << endl;

		for (int k = 0; k < CA; k++)
		{
			if (cTraffic* Traffic = dynamic_cast<cTraffic*>(vector[k]))
			{
				vector[k]->Imprimir();

			}
		}
		cout << "\nMOTOS-------------------------------" << endl;

		for (int l = 0; l < CA; l++)
		{
			if (cMotocicleta* Moto = dynamic_cast<cMotocicleta*>(vector[l]))
			{
				vector[l]->Imprimir();

			}

		}
	
}

float cListaD::Ganancia_Total()
{
	float acum = 0;
	for (int i = 0; i < CA; i++)
	{
		acum += vector[i]->Monto_Total1;
	}

	return acum;
}



