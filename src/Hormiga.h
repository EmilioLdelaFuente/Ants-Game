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
	
	void Hormiga::muevete(Hormiga &h);
	void dibuja();
	void setAltura(float);
	friend class Interaccion;
	friend class OsoHormiguero;
	void mata(OsoHormiguero &oso);
	void destruir();
	

private:
	float altura;
	SpriteSequence sprite;
};