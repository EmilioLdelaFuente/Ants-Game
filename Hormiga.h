#pragma once
#include "ObjetosMoviles.h"
#include "ETSIDI.h"

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
	SpriteSequence dcha, arriba;
	float altura;
};
