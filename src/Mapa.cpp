#include "Mapa.h"
#include "comunH\glut.h"
#include <math.h>


void Mapa::moverOjo()
{
	x_ojo = hormiga.getPosx();
	y_ojo = hormiga.getPosy();
	z_ojo = 30;
}
void Mapa::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		x_ojo, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

							 //aqui es donde hay que poner el codigo de dibujo
	caja.dibuja();
	hormiga.dibuja();
	comida.dibuja();

}

void Mapa::mueve(float t)
{
	hormiga.mueve(t);
}

void Mapa::inicializa()
{
	x_ojo = hormiga.getPosx();
	y_ojo = hormiga.getPosy();
	z_ojo = 30;
}

void Mapa::tecla(unsigned char key)
{

	switch (key)
	{
	case 'a':
		hormiga.setVel(-5.0f, 0.0f);
		break;
	case 'w':
		hormiga.setVel(0.0f, 5.0f);
		break;
	case 's':
		hormiga.setVel(0.0f, -5.0f);
		break;
	case 'd':
		hormiga.setVel(5.0f, 0.0f);
		break;
	}

}
void Mapa::teclaEspecial(unsigned char key)
{
}