#include "Mapa.h"
#include "comunH\glut.h"
#include <math.h>


void Mapa::moverOjo()
{
	float dist = sqrt(x_ojo*x_ojo + z_ojo*z_ojo);
	float ang = atan2(z_ojo, x_ojo);
	ang += 0.05f;
	x_ojo = dist*cos(ang);
	z_ojo = dist*sin(ang);
}
void Mapa::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

							 //aqui es donde hay que poner el codigo de dibujo
	caja.dibuja();
	hormiga.dibuja();

}

void Mapa::mueve()
{
	hormiga.mueve(0.025f);
}

void Mapa::inicializa()
{
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;
}

void Mapa::tecla(unsigned char key)
{

}
void Mapa::teclaEspecial(unsigned char key)
{
	switch (key)
	{
	case '4':
		hormiga.setVel(-5.0f, 0.0f);
		break;
	case '8':
		hormiga.setVel(0.0f, 5.0f);
		break;
	case '2':
		hormiga.setVel(0.0f, -5.0f);
		break;
	case '6':
		hormiga.setVel(5.0f, 0.0f);
		break;
	}
}