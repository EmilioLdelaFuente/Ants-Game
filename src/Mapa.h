#pragma once
#include"Hormiga.h"
#include"Caja.h"
#include"Comida.h"

class Mapa
{

	Caja caja;
	Hormiga hormiga;
	Comida comida;
	float x_ojo;
	float y_ojo;
	float z_ojo;
public:
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void inicializa();
	void moverOjo();
	void mueve(float);
	void dibuja();
};
