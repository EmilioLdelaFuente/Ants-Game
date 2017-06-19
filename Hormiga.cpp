#include "Hormiga.h"
#include "comunH\glut.h"
Hormiga::Hormiga(float ix, float iy) :dcha("imagenes/dcha.png", 12), arriba("imagenes/arriba.png", 12)
{
	arriba.setCenter(1, 0);
	arriba.setSize(2, 2);
	dcha.setCenter(1, 0);
	dcha.setSize(2, 2);
	altura = 0.1f;
	color.set(10, 200, 255);
	setPos(ix, iy);
}
Hormiga::Hormiga() :dcha("imagenes/dcha.png", 12), arriba("imagenes/arriba.png", 12)
{
	arriba.setCenter(1, 0);
	arriba.setSize(2, 2);
	dcha.setCenter(1, 0);
	dcha.setSize(2, 2);
	altura = 0.1f;
	color.set(10, 200, 255);
}



Hormiga::~Hormiga()
{
}
void Hormiga::dibuja() {
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 1.0f, 1.0f);
	//glutSolidSphere(altura, 20, 20); //esfera antigua de diseño

	//gestion de direccion y animacion dcha izqda
	if (velocidad.x>0.01)dcha.flip(false, false);
	if (velocidad.x<-0.01)dcha.flip(true, false);
	if ((velocidad.x<0.01) && (velocidad.x>-0.01))
		dcha.setState(0);
	else if (dcha.getState() == 0)
		dcha.setState(1, false);
	//gestion de direccion y animacion abajo arriba
	if (velocidad.y>0.01)arriba.flip(false, false);
	if (velocidad.y<-0.01)arriba.flip(true, false);
	if ((velocidad.y<0.01) && (velocidad.y>-0.01))
		arriba.setState(0);
	else if (arriba.getState() == 0)
		arriba.setState(1, false);

	if ((velocidad.y < 0.01) && (velocidad.x > -0.01))
		dcha.draw();
	else
		arriba.draw();

	glPopMatrix();

}
void Hormiga::setAltura(float a) { 
	altura = a; 
}