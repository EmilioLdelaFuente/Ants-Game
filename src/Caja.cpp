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
	glEnable(GL_TEXTURE_2D);

	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/grass.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);

	glTexCoord2d(0, 1);		glVertex3f(-29, -6, -0.1);
	glTexCoord2d(1, 1);		glVertex3f(29, -6, -0.1);
	glTexCoord2d(1, 0);		glVertex3f(29, 36, -0.1);
	glTexCoord2d(0, 0);		glVertex3f(-29, 36, -0.1);
	glEnd();

	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);

}
