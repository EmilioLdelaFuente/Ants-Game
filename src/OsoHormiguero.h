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
	float getAltura();
	friend class Interaccion;
	void mueve(float t);
	void OsoHormiguero::SeguirHormiga(Hormiga &h);
	bool gethp();
	void sethp();
	friend class Hormiga;
	void build(float ix, float iy);

private:
	float altura;
	Vector2D aceleracion;
	int hp;

};