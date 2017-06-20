#include "Mapa.h"
#include "comunH\glut.h"
#include <math.h>
#include <stdlib.h>
#include "Interacción.h"
#include "ListaComida.h"



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

void Mapa::mueve(float t)
{
	hormiga.mueve(t);
	Interaccion::rebote(hormiga, caja);
	hormigas.mueve(t);
	hormigas.rebote(caja);
	hormigas.rebote();
	hormigas.rebote(hormiga);
	comidas.colision(hormigas);
}

void Mapa::inicializa()
{
	hormiga.setAltura(0.3f);
	x_ojo = hormiga.getPosx();
	y_ojo = hormiga.getPosy();
	z_ojo = 30;
	comidas.agregar(new Comidita{ 10, 20 });
	comidas.agregar(new Comidita{ 0, 20 });
	comidas.agregar(new Comidita{ -10, 25 });
	comidas.agregar(new Comidita{ 17, 3 });
	comidas.agregar(new Comidita{ 45, 20 });
	comidas.agregar(new Comidita{ 30, -5 });
	comidas.agregar(new Comidita{ 7, -6 });
	comidas.agregar(new Comidita{ 26, -26 });
	comidas.agregar(new Comidita{ 30, 0 });
	comidas.agregar(new Comidita{ 1, 35 });
	comidas.agregar(new Comidita{ 35, -35 });
}

void Mapa::tecla(unsigned char key)
{

	switch (key)
	{
	case 'a':
		hormiga.setVel(-5.0f, 0.0f);
		hormigas.setVel(-5.0f, 0.0f);
		break;
	case 'w':
		hormiga.setVel(0.0f, 5.0f);
		hormigas.setVel(0.0f, 5.0f);
		break;
	case 's':
		hormiga.setVel(0.0f, -5.0f);
		hormigas.setVel(0.0f, -5.0f);
		break;
	case 'd':
		hormiga.setVel(5.0f, 0.0f);
		hormigas.setVel(5.0f, 0.0f);
		break;
	case 'x':
		hormiga.setVel(0.0f, 0.0f);
		hormigas.agregar(new Hormiga(hormiga.getPosx() - rand() %  -3, hormiga.getPosy() + rand() % 3 -2));
		hormigas.setVel(0.0f, 0.0f);
		break;
		
	}

}
void Mapa::teclaEspecial(unsigned char key)
{
}

int Mapa::EnemigoVivo()
{
	if (!=BALOO) return 0;
	else return 1;
}

bool Mapa::HormigaViva()
{
	if (!=hormiga) return 0;
	else return 1;
}
