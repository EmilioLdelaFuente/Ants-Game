#include "Caja.h"
#include"comunH\glut.h"
#include"comunH\ETSIDI.h"



Caja::Caja()
{
	suelo.setColor(100, 100, 110);
	suelo.setLimit(-29.0f, -6.0f, 29.0f, -6.0f);

	techo.setColor(100, 100, 110);
	techo.setLimit(-29.0f, 36.0f, 29.0f, 36.0f);

	pared_dcha.setColor(100, 150, 110);
	pared_dcha.setLimit(-29.0f, -6.0f, -29.0f, 36.0f);

	pared_izq.setColor(100, 150, 110);
	pared_izq.setLimit(29.0f, -6.0f, 29.0f, 36.0f);
}


Caja::~Caja()
{
}
void Caja::dibuja()
{
	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();
}
