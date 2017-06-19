#pragma once
#include "Mapa.h"
#include "ETSIDI.h"
class coordinador
{
public:
	coordinador();
	virtual ~coordinador();

	void teclaEspecial(unsigned char key);
	void tecla(unsigned char key);
	void mueve();
	void dibuja();
protected:
	Mapa mapa;
	enum Estado { INICIO, JUEGO, GAMEOVER, FIN};
	Estado estado;
};

