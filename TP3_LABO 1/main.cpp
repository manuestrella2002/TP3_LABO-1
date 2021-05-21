#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cEmpresa.h"
#include "cMotocicleta.h"
#include "cTraffic.h"



int main()
{
	cEmpresa* Empresa = new cEmpresa("Concesionaria", "Av. Predro Luro");

	cCliente* Cliente1 = new cCliente("Juan", "Estrella", "43624137");
	cCliente* Cliente2 = new cCliente("Delfina", "Colombo", "42674137");
	cAutomovil* Auto1 = new cAutomovil("ABD385", "Rojo", "AD1274578", "458687", 500, 1000);
	cAutomovil* Auto2 = new cAutomovil("DND385", "Verde", "ACD74578", "48958687", 250, 1000);
	cCamioneta* Camioneta1 = new cCamioneta("ART187", "Azul", "fr17556", "1896187", 750, 1000);
	cTraffic* Traffic1 = new cTraffic("FTP896", "Naranja", "YT17556", "87412", 650, 1000);
	cMotocicleta* Moto1 = new cMotocicleta("FTP896", "Naranja", "YT17556", "87412", 150, 1000);


	Empresa->AdquirirVehiculo(Auto1);


	return 0;
}