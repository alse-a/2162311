#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Termino.h"
#include "Polinomio.h"

using namespace std;

int main()
{
    int j;
    string pol; //Variable del polinomio
    string::size_type ant, pos;
    pos = ant = j = 0;

    std::vector <string> pol1; // vec. polinomio

    cout << "Introduzca el polinomio" << endl;
    cin >> pol;

    // ciclo para convertir el polinomio en monomios
    do
    {
        pos = pol.find_first_not_of("+- ");
        pol1[j] = pol.substr(ant, pos);
        cout << j << ": " << pol1[j] << endl;
        ++j;
        pos = ant + 1;
    }
    while( pos != string::npos);

    return 0;
}
