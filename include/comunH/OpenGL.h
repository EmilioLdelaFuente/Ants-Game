
// OpenGL.h: interface de OpenGL
//
//////////////////////////////////////////////////////////////////////

#if !defined(_OPENGL_H__)
#define _OPENGL_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class OpenGL // Clase abstracta: destructor virtual + atributos estaticos
{
public:
	OpenGL();
	virtual ~OpenGL();
	//funcion estatica para imprimir mensaje por pantalla
	static void Print(char *mensaje, int x, int y, unsigned char r = 255, unsigned char g = 255, unsigned char b = 255);
};

#endif // !defined(_OPENGL_H__)

