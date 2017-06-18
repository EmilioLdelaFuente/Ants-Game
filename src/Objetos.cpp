#include "Objetos.h"

Objetos::Objetos()
{
	posicion.x = 0.0;
	posicion.y = 10.0;
}


Objetos::~Objetos()
{
}
Vector2D Objetos::getPos()
{
	return posicion;
}
void Objetos::setPos(Vector2D pos)
{
	posicion = pos;
}
void Objetos::setColor(Byte r, Byte v, Byte a)
{
	color.set(r, v, a);
}
float Objetos::getPosx()
{
	return posicion.x;
}
float Objetos::getPosy()
{
	return posicion.y;
}