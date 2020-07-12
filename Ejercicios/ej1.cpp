#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n;
	int suma=0;
	cout << "ingrese un numero" << endl;
	cin >> n;
	for(int i=0; i<=n; i=i+1)
	{
		suma = suma + i;
	}
	cout << suma << endl;
	return 0;
}
