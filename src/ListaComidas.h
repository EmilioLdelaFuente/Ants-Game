#pragma once
#include "Comida.h"
#include "ListaHormigas.h"
#define Max_Comida 15
class ListaComidas
{
public:
	ListaComidas();
	virtual ~ListaComidas();

	bool agregar(Comida* d);
	void destruirContenido();
	void dibuja();
	int getNum();
	bool colision(ListaHormigas Lis);


private:
	Comida * lista[Max_Comida];
	int numero;
};
