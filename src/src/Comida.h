#pragma once
#include "ObjetosMoviles.h"
#include "Vector2D.h"
#include "ColorRGB.h"
class Comida : public Objetos
{
	float lado;
public:
	Comida();
	virtual ~Comida();
	void dibuja();
};
