#include "Mapa.h"
#include "glut.h"
#include <math.h>
#include <stdlib.h>
//#include <iostream>
#include "Interaccion.h"
#include "ListaComidas.h"


int c;
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
	hormigas.dibuja();
	BALOO.dibuja();
	comidas.dibuja();


}

bool Mapa::FinJuego()
{
	if (!BALOO.gethp()) {
		hormigas.destruirContenido();
		return true;
	}
	else return false;
}

bool Mapa::GameOver()
{
	if (Interaccion::colision(hormiga, BALOO)) {
		return true;
	}
	return false;
}

void Mapa::mueve(float t)
{
	hormiga.mueve(t);
	Interaccion::rebote(hormiga, caja);
	hormigas.mueve(t);
	if (c == 0)hormigas.muevete(hormiga);
	hormigas.rebote(caja);
	hormigas.rebote();
	hormigas.rebote(hormiga);
	BALOO.mueve(t);
	BALOO.SeguirHormiga(hormiga);
	comidas.comer(hormiga, hormigas);
	bool a=hormigas.pelea(BALOO);
	if (a == true) { c = 0; }
}

void Mapa::inicializa()
{
	c = 0;
	hormiga.setAltura(0.3f);
	x_ojo = hormiga.getPosx();
	y_ojo = hormiga.getPosy();
	z_ojo = 30;
	comidas.agregar(new Comida{ 0, 20 });
	comidas.agregar(new Comida{ 0, 25 });
	comidas.agregar(new Comida{ 10, 20 });
	comidas.agregar(new Comida{ 10, 25 });
	comidas.agregar(new Comida{ 0, -20 });
	comidas.agregar(new Comida{ -10, 25 });
	BALOO.build(50.0f, 50.0f);
	hormiga.setPos( 0.0f, 0.0f);
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
	case 'x':
		hormigas.mata(BALOO);
		c = 1;
		break;
	}

}
void Mapa::teclaEspecial(unsigned char key)
{
}