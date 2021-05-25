#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cEmpresa.h"
#include "cMotocicleta.h"
#include "cTraffic.h"
#include"stdlib.h"


int main()
{
	time_t aux = time(NULL);
	time_t* aux1 = &aux;
	tm* aux_dia;
	aux_dia = localtime(aux1);
	cEmpresa* Empresa = new cEmpresa("Concesionaria", "Av. Predro Luro");

	
	cCliente* Cliente1 = new cCliente("Juan", "Estrella", "43624137");
	cCliente* Cliente2 = new cCliente("Delfina", "Colombo", "42674137");
	cAutomovil* Auto1 = new cAutomovil("ABD385", "Rojo", "AD1274578", "458687",1);
	cAutomovil* Auto2 = new cAutomovil("DND385", "Verde", "ACD74578", "48958687",0);
	cCamioneta* Camioneta1 = new cCamioneta("ART187", "Azul", "fr17556", "1896187",2,1);
	cTraffic* Traffic1 = new cTraffic("FTP896", "Naranja", "YT17556", "87412",2,0);
	cMotocicleta* Moto1 = new cMotocicleta("FTP896", "Naranja", "YT17556", "87412",1);
	cAlquiler* Alquiler1 = new cAlquiler(Auto1, "101", Cliente1,aux_dia, 5);//HACER SUMA DE DIAS DE ALQUILER PARA OBTENER FECHA FINAL
	cAlquiler* Alquiler2 = new cAlquiler(Camioneta1, "102", Cliente2, aux_dia, 2);
	
	Empresa->AdquirirVehiculo(Auto1);
	Empresa->RegistrarCliente(Cliente1);
	Empresa->RegistarAlquiler(Alquiler1);
	Empresa->RealizarMantenimiento(Auto1);
	
	
	Auto1->Imprimir();
	Camioneta1->Imprimir();
	Traffic1->Imprimir();
	Moto1->Imprimir();

	cout << Empresa;

	system("Pause");
	return 0;
}