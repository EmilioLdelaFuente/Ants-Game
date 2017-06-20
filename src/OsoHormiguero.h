#pragma once
#include "ObjetosMoviles.h"
#include "Vector2D.h"
#include "Hormiga.h"

class OsoHormiguero :public ObjetosMoviles
{
public:
	OsoHormiguero();
	OsoHormiguero(float, float);
	virtual ~OsoHormiguero();
	void dibuja();
	void setAltura(float);
	friend class Interaccion;
	void mueve(float t);
	void OsoHormiguero::SeguirHormiga(Hormiga &h);
	friend class Hormiga;

private:
	float altura;
	Vector2D aceleracion;

};
