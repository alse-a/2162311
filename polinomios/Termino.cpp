#include <iostream>
#include "Polinomio.h"

using namespace std;

Termino::Termino(float c, int p);
{
    _coeficiente = c;
    _potencia = p;
    _siguiente = ptr;
}
float Termino::getC()
{
    return _coeficiente;
}
int Termino::getP()
{
    return _potencia;
}
Termino* Termino::getSiguiente()
{
    return _siguiente;
}
void Termino::setCP(float &c, int &p)
{
    _coeficiente = c;
    _potencia = p;
    return ;
}
void Termino::setSiguiente(Termino *ptr)
{
    _siguiente = ptr;
    return ;
}
Termino::Termino()
{

}
