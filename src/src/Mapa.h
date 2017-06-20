#pragma once
#include"Hormiga.h"
#include"Caja.h"
#include"Comidita.h"
#include "ListaHormigas.h"
#include "OsoHormiguero.h"
#include "ListaComida.h"

class Mapa
{
	ListaHormigas hormigas;
	ListaComida comidas;
	Caja caja;
	Hormiga hormiga;
	OsoHormiguero BALOO{ 30.0f, 35.0f };
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
	int EnemigoVivo();
	int HormigaViva();
};
