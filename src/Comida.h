#pragma once
#include "ObjetosMoviles.h"
#include "Vector2D.h"
#include "ColorRGB.h"
class Comida : public Objetos
{
	float lado;
	friend class Interaccion;
public:
	Comida(float ix, float iy);
	virtual ~Comida();
	void dibuja();
	float getlado();
	void destruir();
};