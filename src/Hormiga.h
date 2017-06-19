#pragma once
#include "ObjetosMoviles.h"
#include "comunH\ETSIDI.h"
using ETSIDI::SpriteSequence;
class Hormiga :public ObjetosMoviles
{
public:
	Hormiga();
	Hormiga(float, float);
	virtual ~Hormiga();
	void dibuja();
	void setAltura(float);
	friend class Interaccion;

private:
	float altura;
	SpriteSequence sprite;
};