#pragma once
#include "ObjetosMoviles.h"
class OsoHormiguero :public ObjetosMoviles
{
public:
	OsoHormiguero();
	OsoHormiguero(float, float);
	virtual ~OsoHormiguero();
	void dibuja();
	void setAltura(float);
	friend class Interaccion;

private:
	float altura;

};
