#include "OsoHormiguero.h"
#include "comunH\glut.h"


OsoHormiguero::OsoHormiguero()
{
	altura = 4.0f;
	color.set(250, 70, 0);
	hp=10;
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

int OsoHormiguero::perderVida(){
	return 0;
}
