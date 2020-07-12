#include <iostream>
#include <complejo.h>

Complejo::Complejo ( float r, float i, ){
 re=r;
 im=i;
}

Complejo Complejo::operator +( Complejo const &p ){
 Complejo c;
 c.re=re+p.re;
 c.im=this->im+p.im;
 return c;
}

Complejo Complejo::operator -( Complejo const &p ){
 Complejo c;
 c.re=re-p.re;
 c.im=im-p.im;
 return c;
}

Complejo Complejo::operator *( Complejo const &p ){
 Complejo c;
 c.re=(re*p.re)-(im*p.im);
 c.im=(re*p.im)+(im*p.re);
 return c;
}

std::ostream& operator<< (std::ostream &out, Complejo const &p){
 out<< p.re <<"+"<< p.im <<"j";
 return out;
}

void Complejos::setReal( float r ){
 re=r;
 return ;
}

float Complejo::getReal(){
 return re;
}

void Complejo::setImag( float r ){
 im=r
 return ;
}

float Complejo::getImag) float r ){
 return im;
}

