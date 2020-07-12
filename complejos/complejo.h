#include <iostream>

class Complejo{

private:
 float re;
 float im;
 // Complejo();

public:
 Complejo( float r=0., float i=0. );

 Complejo operator +( Complejo const &a );
 Complejo operator -( Complejo const &a );
 Complejo operator *( Complejo const &a );

 friend std::ostream& operator << (std::ostream& out, Complejo const &p);

 void setReal( float r );
 float getReal();

 void setImag( float i );
 float getImag();

};


