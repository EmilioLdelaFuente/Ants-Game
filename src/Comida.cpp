#pragma once
#include <stdlib.h>
#include "comunH\glut.h"
#include "Comida.h"



Comida::Comida(float ix, float iy)
{
	setPos(ix, iy);
	lado = 0.5;
}


Comida::~Comida()
{
}
void Comida::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glRotatef(30, 1, 1, 1);
	glColor3f(rand() / (float)RAND_MAX,
		rand() / (float)RAND_MAX,
		rand() / (float)RAND_MAX);//color aleatorio
	glutSolidCube(lado);
	glPopMatrix();


}
float Comida::getlado() {
	return lado;
}
