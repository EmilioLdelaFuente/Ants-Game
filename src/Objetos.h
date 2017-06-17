#pragma once
#include"Vector2D.h"
#include"ColorRGB.h"
class Objetos
{
public:
	Objetos();
	virtual ~Objetos();
	Vector2D getPos();
	void setPos(Vector2D pos);
	void setColor(Byte r, Byte v, Byte a);
protected:
	Vector2D posicion;
	ColorRGB color;
};

