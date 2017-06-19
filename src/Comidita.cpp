#pragma once
#include <stdlib.h>
#include "comunH\glut.h"
#include "Comidita.h"



Comidita::Comidita()
{
	lado = 0.5;
}


Comidita::~Comidita()
{
}
void Comidita::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y,0);
	glRotatef(30, 1, 1, 1);
	glColor3f(rand() / (float)RAND_MAX,
		rand() / (float)RAND_MAX,
		rand() / (float)RAND_MAX);//color aleatorio
	glutSolidCube(lado);
	glPopMatrix();


}
float Comidita::getlado(){
	return lado;
}