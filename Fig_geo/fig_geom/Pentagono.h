/**
 * Project Untitled
 */


#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"


class Pentagono: public Geometrica {
public:

/**
 * @param l
 * @param x
 * @param y
 */
Pentagono(float l, float a, float x=0., float y=0.);
float area();
float perimetro();

void setLado(float l){ _lado = l;}
float getLado(){return _lado;}

void setApotema(float a){ _apotema = a;}
float getApotema(){return _apotema;}

private:
	float _lado;
        float _apotema;

Pentagono();
};

#endif //_PENTAGONO_H
