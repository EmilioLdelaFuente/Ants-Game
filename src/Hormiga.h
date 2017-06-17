#pragma once
#include "ObjetosMoviles.h"
class Hormiga :public ObjetosMoviles
{
public:
	Hormiga();
	virtual ~Hormiga();
	void dibuja();
	void setAltura(float);
private:
	float altura;
};
