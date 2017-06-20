#include "ListaComidas.h"
#include "Interaccion.h"



ListaComidas::ListaComidas()
{
}


ListaComidas::~ListaComidas()
{
}
void ListaComidas::dibuja()
{
	for (int i = 0; i<numero; i++)
		lista[i]->dibuja();
}


void ListaComidas::destruirContenido()
{
	for (int i = 0; i<numero; i++)
		delete lista[i];

	numero = 0;
}

bool ListaComidas::agregar(Comida *d)
{
	for (int i = 0; i<numero; i++)//para evitar que se añada una esfera ya existente
		if (lista[i] == d)
			return false;

	if (numero<Max_Comida)
		lista[numero++] = d;
	else
		return false;
	return true;
}
int ListaComidas::getNum() {
	return numero;
}
void ListaComidas::comer(Hormiga &h, ListaHormigas &lis) {
	for (int i = 0; i < numero; i++) {
		if (Interaccion::colision(h, *lista[i])) {
			lista[i]->destruir();
			lis.agregar(new Hormiga(h.getPosx() - rand() % -3, h.getPosy() + rand() % 3 - 2));
		}

	}
}