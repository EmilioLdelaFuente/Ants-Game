#include "coordinador.h"



coordinador::coordinador()
{
	estado = INICIO;
	ETSIDI::playMusica("sonidos/XSONG.mp3");
}


coordinador::~coordinador()
{
}

void coordinador::teclaEspecial(unsigned char key)
{
	if (estado == JUEGO)
		mapa.teclaEspecial(key);
}

void coordinador::tecla(unsigned char key)
{
	if (estado == INICIO)
	{
		//mapa.inicializa();
	
		if (key == 's') {
			estado = JUEGO;
			ETSIDI::playMusica("sonidos/MindHeist.mp3");
		}
	}
	else if (estado == JUEGO)
	{
		mapa.tecla(key);
	}
	else if (estado == GAMEOVER)
	{
		if (key == 'r')
			estado = INICIO;
	}
}

void coordinador::mueve()
{
	if (estado == JUEGO) {
		mapa.mueve(0.025f);
		mapa.moverOjo();
		//if (mapa.EnemigoVivo() == 0)
		//{
		//	estado = FIN;
		//}
		//if (mapa.HormigaViva() == 0)
		//{
		//	estado = GAMEOVER;
		//}
	}
}

void coordinador::dibuja()
{
	if (estado == INICIO)
	{//CODIGO PARA PINTAR UNA PANTALLA NEGRA CON LETRAS
		gluLookAt(0, 7.5, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
		ETSIDI::setTextColor(1, 1, 1);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
		ETSIDI::printxy("Pulsa -s- para jugar", -3, 8);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 42);
		ETSIDI::printxy("ANT FARM", -6, 12);
		//glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/grass.png").id);
		//glDisable(GL_LIGHTING);
		//glBegin(GL_POLYGON);
		//glColor3f(1, 1, 1);

		//glTexCoord2d(0, 1);		glVertex3f(-29, -36, -0.1);
		//glTexCoord2d(1, 1);		glVertex3f(29, -36, -0.1);
		//glTexCoord2d(1, 0);		glVertex3f(29, 36, -0.1);
		//glTexCoord2d(0, 0);		glVertex3f(-29, 36, -0.1);
		//glEnd();
		//glEnable(GL_LIGHTING);
		//glDisable(GL_TEXTURE_2D);
		
	}
	else if (estado == JUEGO)
		mapa.dibuja();
	else if (estado == GAMEOVER)
	{
		mapa.dibuja();
		ETSIDI::setTextColor(1, 0, 0);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("GAMEOVER: Has perdido", -5, 10);
		ETSIDI::printxy("Pulsa -R- para volver a jugar", -5, 5);
	}
	else if (estado == FIN)
	{
		mapa.dibuja();
		ETSIDI::setTextColor(1, 0, 0);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("Has matado al Oso Hormiguero!!!", -5, 10);
		ETSIDI::printxy("Pulsa -R- para volver a jugar", -5, 5);
	}
}

void coordinador::inicializa()
{
	mapa.inicializa();
}
