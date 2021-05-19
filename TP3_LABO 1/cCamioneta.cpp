#include "cCamioneta.h"

cCamioneta::cCamioneta(string patente_, string color_, string Num_chasis, string poliza_, float alquiler_dia, float tarifa_dia, float tarifa_Base, unsigned int sillas, bool portaequipaje_) : cVehiculo(patente_, color_, Num_chasis, poliza_, alquiler_dia, tarifa_dia, tarifa_Base)
{
	Cant_silla_seguridad = sillas;
	Portaequipaje = portaequipaje_;
}
