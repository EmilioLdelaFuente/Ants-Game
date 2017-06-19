#pragma once

#define MAX_hormigas 8

#include "Hormiga.h"
#include "Caja.h"
#include "Comida.h"


class ListaHormigas
{
public:
	ListaHormigas(void);
	~ListaHormigas(void);

	void mueve(float t);
	void dibuja();
	void setPos(float a, float b);
	void setVel(float, float);
	Hormiga* colision(Comida c);
	void rebote(Caja caja);
	void rebote(Hormiga &hormi);


	bool agregar(Hormiga* h);
	void eliminar(Hormiga* h);
	void eliminar(int index);
	void destruirContenido();

	int getNumero() { return numero; }
	Hormiga* operator[] (int index);
	void rebote();

private:
	Hormiga * lista[MAX_hormigas];
	int numero;
};