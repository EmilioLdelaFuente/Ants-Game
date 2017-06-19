#include "ListaComida.h"



ListaComida::ListaComida()
{
}


ListaComida::~ListaComida()
{
}
void ListaComida::dibuja()
{
	for (int i = 0; i<numero; i++)
		lista[i]->dibuja();
}


void ListaComida::destruirContenido()
{
	for (int i = 0; i<numero; i++)
		delete lista[i];

	numero = 0;
}

bool ListaComida::agregar(Comidita *d)
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
int ListaComida::getNum(){
	return numero;
}
bool ListaComida::colision(ListaHormigas Lis){
	for (int i = 0; i < numero; i++){
		Lis.colision(*lista[i]);
	}
	return true;
}