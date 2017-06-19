#pragma once
#include "ObjetosMoviles.h"
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
};
