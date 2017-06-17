#include "ObjetosMoviles.h"


ObjetosMoviles::ObjetosMoviles(void)
{
}


ObjetosMoviles::~ObjetosMoviles(void)
{
}

void ObjetosMoviles::mueve(float t)
{
	posicion = posicion + velocidad*t;
}
void ObjetosMoviles::setVel(Vector2D vel)
{
	velocidad = vel;
}
void ObjetosMoviles::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}