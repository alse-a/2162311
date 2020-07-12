/**
 * Project Untitled
 */


#include "Pentagono.h"

/**
 * Pentagono implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Pentagono::Pentagono(float l, float a, float x, float y) {
   _lado = l;
   _apotema = a;
   setX(x);
   setY(y);
}

Pentagono::Pentagono() {

}

float Pentagono::area(){
   return 2.5 * _lado * _apotema;
}

float Pentagono::perimetro(){
   return 5 * _lado;
}

