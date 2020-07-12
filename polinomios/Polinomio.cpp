#include <iostream>
#include "Polinomio.h"
#include "Termino.h"
#include <string>

using namespace std;
Polinomio Termino::Termino(float c, int p)
{
    _coeficiente = c;
    _potencia = p;
}

Polinomio::Polinomio(string pol)
{
    return pol;
}

Polinomio::~Polinomio(){}

Polinomio Polinomio::operator +(Polinomio& p)
{
    Termino c,b,r;
    if(c._potencia = b._potencia)
    {
        r._coeficiente = c._coeficiente  + b._coeficiente
    }
    Polinomio po;
    return po;
}
Polinomio Polinomio::operator -(Polinomio& p)
{
    Termino c,b,r;
    if(c._potencia = b._potencia)
    {
        r._coeficiente = c._coeficiente  - b._coeficiente
    }
    Polinomio po;
    return po;
}
Polinomio Polinomio::operator *(Polinomio& p)
{
    Termino c,b,r;
    r._coeficiente = c._coeficiente * b._coeficiente;
    r._potencia = c._potencia + b._potencia
    Polinomio po;
    return po;
}
Polinomio Polinomio::operator /(float f)
{
    Termino r,b;
    r._coeficiente = b._coeficiente/f;
    float f;
    return f;
}
ostream& operator << (ostream& stream, Polinomio& p)
{
    return stream;
}
bool Polinomio::borrar()
{

}
bool Polinomio::redefinir()
{

}
int Polinomio::getOrden()
{

}
char Polinomio::getVariable()
{

}
void Polinomio::setVariable(char value)
{

}
void Polinomio::nuevoTermino(float c, int p)
{

}
void Polinomio::simplificar()
{

}
void Polinomio::ordenar()
{

}
string Polinomio::getString()
{

}
