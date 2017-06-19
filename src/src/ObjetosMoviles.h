#pragma once
#include "Vector2D.h"
#include "Objetos.h"
class ObjetosMoviles:public Objetos
{
public:
	ObjetosMoviles(void);
	virtual ~ObjetosMoviles(void);
	virtual void mueve(float t);
	virtual void setVel(Vector2D vel);
	virtual void setVel(float, float);
protected:
	Vector2D velocidad;
};

