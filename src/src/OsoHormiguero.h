#pragma once
#include "ObjetosMoviles.h"
class OsoHormiguero:public ObjetosMoviles
{
	public:
		OsoHormiguero();
		OsoHormiguero(float, float);
		virtual ~OsoHormiguero();
		void dibuja();
		void setAltura(float);
		int PerderVida();
		friend class Interaccion;

	private:
		float altura;
		float hp;

};

