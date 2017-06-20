#pragma once
#include "Caja.h"
#include "Hormiga.h"
#include "Comida.h"
#include "OsoHormiguero.h"

class Interaccion
{
public:

	Interaccion();
	virtual ~Interaccion();

	//funciones que modifican (paso por referencia) los objetos que se les pasa como parametro	
	static void rebote(Hormiga& e, Caja c);
	static bool rebote(Hormiga& hormiga1, Hormiga& hormiga2);

	//funciones de informacion, no cambian los objetos, solo devuelven true si hay colision
	static bool colision(Hormiga e, Comida h);
	static bool colision(Hormiga e, OsoHormiguero o);


};