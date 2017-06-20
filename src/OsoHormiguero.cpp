#include "OsoHormiguero.h"
#include "glut.h"
#include "Vector2D.h"
#include "Hormiga.h"
#include <iostream>


OsoHormiguero::OsoHormiguero()
{
	altura = 4.0f;
	color.set(250, 70, 0);
	hp = 5;
}


OsoHormiguero::~OsoHormiguero()
{
	//std::cout << "oso muerto" << std::endl;
}
OsoHormiguero::OsoHormiguero(float ix, float iy)
{
	altura = 4.0f;
	color.set(250, 70, 0);
	setPos(ix, iy);
	hp = 5;
}
void OsoHormiguero::dibuja() {
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	color.ponColor();
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
}
void OsoHormiguero::setAltura(float a) {
	altura = a;
}
float OsoHormiguero::getAltura()
{
	return altura;
}
void OsoHormiguero::mueve(float t) {
	posicion = posicion + velocidad*t;
}
void OsoHormiguero::SeguirHormiga(Hormiga &h) {
	Vector2D resta;
	resta = h.posicion - posicion;
	velocidad = resta * 0.25f;
}

bool OsoHormiguero::gethp()
{
	if (hp == 0) {
		return false;
	}
	else return true;
}

void OsoHormiguero::sethp()
{
	hp--;
}

void OsoHormiguero::build(float ix, float iy)
{
	altura = 4.0f;
	color.set(250, 70, 0);
	setPos(ix, iy);
	hp = 5;
}



