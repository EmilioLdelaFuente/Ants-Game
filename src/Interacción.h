#pragma once
#include "Caja.h"
#include "Hormiga.h"
#include "Comidita.h"

class Interaccion
{
public:

	Interaccion();
	virtual ~Interaccion();

	//funciones que modifican (paso por referencia) los objetos que se les pasa como parametro	
	static void rebote(Hormiga& e, Caja c);
	//static bool rebote(Hormiga& h1, Hormiga& h2);

	//funciones de informacion, no cambian los objetos, solo devuelven true si hay colision
	static bool colision(Hormiga e, Comidita h);


};
