#pragma once
#include "Objetos.h"


class Pared :public Objetos
{
public:
	Pared();
	virtual ~Pared();
	void setLimit(float x1, float y1, float x2, float y2);
	float distancia(Vector2D punto, Vector2D *direccion);
	void dibuja();

protected:
	Vector2D limite1;
	Vector2D limite2;
};

