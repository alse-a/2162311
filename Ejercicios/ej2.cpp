#include <iostream>

using namespace std;

int main()
{
	int n;
	int f=1;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	for(int i=1; i<=n; i=i+1)
	{
		f = f*i;
	}
	cout << f << endl;
	return 0;
}
