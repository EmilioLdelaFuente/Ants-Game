#pragma once
#include"Vector2D.h"
#include"ColorRGB.h"
class Objetos
{
public:
	Objetos();
	virtual ~Objetos();
	Vector2D getPos();
	virtual float getPosx();
	virtual float getPosy();
	virtual void setPos(Vector2D pos);
	virtual void setColor(Byte r, Byte v, Byte a);
protected:
	Vector2D posicion;
	ColorRGB color;
};

