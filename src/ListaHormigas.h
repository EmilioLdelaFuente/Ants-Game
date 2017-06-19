#pragma once

#define MAX_hormigas 8

#include "Hormiga.h"
#include "Caja.h"
#include "Comidita.h"


class ListaHormigas
{
public:
	ListaHormigas(void);
	~ListaHormigas(void);

	void mueve(float t);
	void dibuja();
	void setPos(float a, float b);
	void setVel(float,float);
	Hormiga* colision(Comidita c);
	void rebote(Caja caja);
	

	bool agregar(Hormiga* h);
	void eliminar(Hormiga* h);
	void eliminar(int index);
	void destruirContenido();

	int getNumero(){ return numero; }
	Hormiga* operator[] (int index);

private:
	Hormiga * lista[MAX_hormigas];
	int numero;
};
