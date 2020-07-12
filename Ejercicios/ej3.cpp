#include <iostream>

using namespace std;

int main()
{
	int m[100][100];
	int filas;
	int columnas;
	cout << "Digite el numero de filas: ";
	cin >> filas;
	cout << "Digite el numero de columnas: ";
	cin >> columnas;
// Crear matriz
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			if(i==j)
			{
				m[i][j] = 1;
			}
			else
			{
				m[i][j] = 0;
			}
		}
	}
// Mostrar matriz
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout << m[i][j] ;
		}
		cout << "\n";
	}
	return 0;
}
