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
	void Hormiga::muevete(Hormiga &h);
	void dibuja();
	void setAltura(float);
	friend class Interaccion;
	friend class OsoHormiguero;
	void mata(OsoHormiguero &oso);

private:
	float altura;
	SpriteSequence sprite;
};