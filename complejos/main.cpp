#include <iostream>
#include <complejo.h>

int main( int argc, char* argv[] ){
 Complejo a,b,c;
 a.SetReal( 25. );
 a.SetImag( 3. );

 b.SetReal( a.getReal() );
 b.SetImag( a.getImag() );

 std::cout<<" Primer numero: "<< a <<std::endl;
 std::cout<<" Segundo numero: "<< b <<std::endl;

 c=a+b;
 std::cout<<" Suman: "<< c <<std::endl;

 c=a-b;
 std::cout<<" Restan: "<< c <<std::endl;

 c=a*b;
 std::cout<<" Multiplican: "<< c <<std::endl;

 return 0;
}
