#include "Hormiga.h"
#include "comunH\glut.h"
Hormiga::Hormiga(float ix, float iy):sprite("imagenes/pangPlayer.png",5)
{
	sprite.setCenter(1, 0);
	sprite.setSize(2, 2);
	altura = 0.1f;
	color.set(10, 200, 255);
	setPos(ix, iy);
}
Hormiga::Hormiga():sprite("imagenes/pangPlayer.png", 5)
{
	sprite.setCenter(1, 0);
	sprite.setSize(2, 2);
	altura = 1.8f;
	color.set(10, 200, 255);
}



Hormiga::~Hormiga()
{
}
void Hormiga::dibuja() {
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	color.ponColor();
	//glutSolidSphere(altura, 20, 20);
	//glPopMatrix();
	//gestion de direccion y animacion
	if (velocidad.x>0.01)sprite.flip(false, false);
	if (velocidad.x<-0.01)sprite.flip(true, false);
	if ((velocidad.x<0.01) && (velocidad.x>-0.01))
		sprite.setState(0);
	else if (sprite.getState() == 0)
		sprite.setState(1, false);
	sprite.draw();

	glPopMatrix();
}
void Hormiga::setAltura(float a) {
	altura = a;
}