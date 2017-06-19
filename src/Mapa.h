#pragma once
#include"Hormiga.h"
#include"Caja.h"
#include"Comidita.h"
#include "ListaHormigas.h"

class Mapa
{
	ListaHormigas hormigas;
	Caja caja;
	Hormiga hormiga;
	Comidita comida;
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
