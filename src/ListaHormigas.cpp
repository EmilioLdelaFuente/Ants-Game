#include "ListaHormigas.h"
#include "Interaccion.h"

ListaHormigas::ListaHormigas(void)
{
	numero = 0;
	for (int i = 0; i<MAX_hormigas; i++)lista[i] = 0;
}


ListaHormigas::~ListaHormigas(void)
{

}

bool ListaHormigas::agregar(Hormiga* h)
{
	for (int i = 0; i<numero; i++)//para evitar que se añada una hormiga ya existente
		if (lista[i] == h)
			return false;

	if (numero<MAX_hormigas)
		lista[numero++] = h;
	else
		return false;
	return true;
}

void ListaHormigas::dibuja()
{
	for (int i = 0; i<numero; i++)
		lista[i]->dibuja();
}

void ListaHormigas::mueve(float t)
{
	for (int i = 0; i<numero; i++)
		lista[i]->mueve(t);
}
void ListaHormigas::setPos(float a, float b) {
	for (int i = 0; i<numero; i++)
		lista[i]->setPos(a, b);

}
void ListaHormigas::setVel(float a, float b) {
	for (int i = 0; i < numero; i++)
		lista[i]->setVel(a, b);
}
void ListaHormigas::eliminar(int index)
{
	if ((index<0) || (index >= numero))
		return;

	delete lista[index];

	numero--;
	for (int i = index; i<numero; i++)
		lista[i] = lista[i + 1];

}

void ListaHormigas::eliminar(Hormiga *h)
{
	for (int i = 0; i<numero; i++)
		if (lista[i] == h)
		{
			eliminar(i);
			return;
		}

}
Hormiga *ListaHormigas::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i<0)
		i = 0;

	return lista[i];
}
Hormiga* ListaHormigas::colision(Comida c) {
	for (int i = 0; i<numero; i++)
	{
		if (Interaccion::colision(*(lista[i]), c))
			return lista[i];
	}
	return 0; //no hay colisión
}
void ListaHormigas::rebote(Caja caja) {
	for (int i = 0; i<numero; i++)
		Interaccion::rebote(*(lista[i]), caja);
}
void ListaHormigas::rebote()
{
	for (int i = 0; i<numero - 1; i++)
		for (int j = i + 1; j<numero; j++)
			Interaccion::rebote(*(lista[i]), *(lista[j]));
}
void ListaHormigas::rebote(Hormiga &hormi) {
	for (int i = 0; i < numero; i++) {
		Interaccion::rebote(*(lista[i]), hormi);
	}
}