#pragma once
#include "Comidita.h"
#include "ListaHormigas.h"
#define Max_Comida 15
class ListaComida
{
public:
	ListaComida();
	virtual ~ListaComida();

	bool agregar(Comidita* d);
	void destruirContenido();
	void dibuja();
	int getNum();
	bool colision(ListaHormigas Lis);


private:
	Comidita * lista[Max_Comida];
	int numero;
};

