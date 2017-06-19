#include "Hormiga.h"
#include "comunH\glut.h"
Hormiga::Hormiga(float ix, float iy)
{
	altura = 0.1f;
	color.set(10, 200, 255);
	setPos(ix, iy);
}
Hormiga::Hormiga()
{
	altura = 0.1f;
	color.set(10, 200, 255);
}



Hormiga::~Hormiga()
{
}
void Hormiga::dibuja() {
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	color.ponColor();
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
}
void Hormiga::setAltura(float a) { 
	altura = a; 
}