#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

    float vecg[6];

    float radio;
    float x;
    float y;

    ifstream archivo;
    string path;
    path = argv[1];
    archivo.open( path );

    if( archivo.is_open() ){
       while( !archivo.eof() ){
     
          getline( archivo, path );
          vecg.push_back( path );

          if( vecg[0] = 1 ){
            radio = atof( vecg[1].c_str());
            x = atof( vecg[2].c_str());
            y = atof( vecg[3].c_str());
            cout << radio <<endl;
            cout << x <<endl;
            cout << y <<endl;
          }
       }
    }
    return 0;
}
