/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"


class Triangulo: public Geometrica {
public:

/**
 * @param b
 * @param h
 * @param x
 * @param y
 */

Triangulo(float b, float h, float x = 0., float y = 0.);
float area();
float perimetro();

void setBase(float b){ _base=b;}
float setBase(){return _base;}

void setAltura(float h){ _altura=h;}
float setAltura(){return _altura;}

private:
	float _base;
	float _altura;

Triangulo();
};

#endif //_TRIANGULO_H
