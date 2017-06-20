#include "OsoHormiguero.h"
#include "comunH\glut.h"
#include "Vector2D.h"


OsoHormiguero::OsoHormiguero()
{
	altura = 4.0f;
	color.set(250, 70, 0);
}


OsoHormiguero::~OsoHormiguero()
{
}
OsoHormiguero::OsoHormiguero(float ix, float iy)
{
	altura = 4.0f;
	color.set(250, 70, 0);
	setPos(ix, iy);
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
void OsoHormiguero::mueve(float t) {
	posicion = posicion + velocidad*t;
}
void OsoHormiguero::SeguirHormiga(Hormiga &h){
	Vector2D resta;
	resta = h.posicion - posicion;
	velocidad = resta * 0.025f;
}