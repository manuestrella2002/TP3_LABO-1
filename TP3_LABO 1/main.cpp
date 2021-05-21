#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cEmpresa.h"
#include "cMotocicleta.h"
#include "cTraffic.h"



int main()
{
	time_t aux = time(NULL);
	time_t* aux1 = &aux;
	tm* aux_dia;
	aux_dia = localtime(aux1);
	cEmpresa* Empresa = new cEmpresa("Concesionaria", "Av. Predro Luro");

	cCliente* Cliente1 = new cCliente("Juan", "Estrella", "43624137");
	cCliente* Cliente2 = new cCliente("Delfina", "Colombo", "42674137");
	cAutomovil* Auto1 = new cAutomovil("ABD385", "Rojo", "AD1274578", "458687", 500);
	cAutomovil* Auto2 = new cAutomovil("DND385", "Verde", "ACD74578", "48958687", 250);
	cCamioneta* Camioneta1 = new cCamioneta("ART187", "Azul", "fr17556", "1896187", 750);
	cTraffic* Traffic1 = new cTraffic("FTP896", "Naranja", "YT17556", "87412", 650);
	cMotocicleta* Moto1 = new cMotocicleta("FTP896", "Naranja", "YT17556", "87412", 150);
	cAlquiler* Alquiler1 = new cAlquiler(Auto1, "101", Cliente1,aux_dia, 5);//HACER SUMA DE DIAS DE ALQUILER PARA OBTENER FECHA FINAL

	Empresa->AdquirirVehiculo(Auto1);
	Empresa->RegistrarCliente(Cliente1);
	Empresa->RegistarAlquiler(Alquiler1);
	Empresa->RealizarMantenimiento(Auto1);
	Auto1->Imprimir();


	return 0;
}