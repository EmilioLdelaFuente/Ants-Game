#pragma once
#include"Hormiga.h"
#include"Caja.h"
#include "ListaHormigas.h"
#include "OsoHormiguero.h"
#include "ListaComidas.h"

class Mapa
{
	ListaHormigas hormigas;
	ListaComidas comidas;
	Caja caja;
	Hormiga hormiga;
	OsoHormiguero BALOO{ 50.0f, 50.0f };
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