#pragma once
#include "Comida.h"
#include "ListaHormigas.h"
#include "Hormiga.h"
#define Max_Comida 15
class ListaComidas
{
public:
	ListaComidas();
	virtual ~ListaComidas();

	bool agregar(Comida* d);
	bool destruir(Comida*d);
	void destruirContenido();
	void dibuja();
	int getNum();
	void comer(Hormiga &h, ListaHormigas &list);


private:
	Comida * lista[Max_Comida];
	int numero;
};