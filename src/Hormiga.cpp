#include "Hormiga.h"
#include "comunH\glut.h"
#include "OsoHormiguero.h"
Hormiga::Hormiga(float ix, float iy):sprite("imagenes/arriba.png",12)
{
	sprite.setCenter(1, 0);
	sprite.setSize(2, 2);
	altura = 0.8f;
	color.set(10, 200, 255);
	setPos(ix, iy);
}
Hormiga::Hormiga():sprite("imagenes/arriba.png", 12)
{
	sprite.setCenter(1, 0);
	sprite.setSize(2, 2);
	altura = 1.1f;
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
	sprite.draw();

	glPopMatrix();
}
void Hormiga::setAltura(float a) {
	altura = a;
}
void Hormiga::muevete(Hormiga &h){
	Vector2D resta;
	resta = h.posicion - posicion;
	velocidad = resta*1.2f;
}
void Hormiga::mata(OsoHormiguero &oso) {
	Vector2D resta;
	resta = oso.posicion - posicion;
	velocidad = resta*1.2f;

}