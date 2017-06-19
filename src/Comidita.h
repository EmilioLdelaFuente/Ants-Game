#pragma once
#include "ObjetosMoviles.h"
#include "Vector2D.h"
#include "ColorRGB.h"
class Comidita : public Objetos
{
	float lado;
	friend class Interaccion;
public:
	Comidita();
	virtual ~Comidita();
	void dibuja();
	float getlado();
};

