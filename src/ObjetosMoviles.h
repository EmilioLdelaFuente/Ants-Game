#pragma once
#include "Vector2D.h"
#include "Objetos.h"
class ObjetosMoviles:public Objetos
{
public:
	ObjetosMoviles(void);
	virtual ~ObjetosMoviles(void);
	void mueve(float t);
	void setVel(Vector2D vel);
	void setVel(float, float);
protected:
	Vector2D velocidad;
};

