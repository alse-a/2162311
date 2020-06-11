#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
 int resp,a,b,sum,mul,rest,divi;
 resp=a=b=sum=mul=rest=divi=0;
 cout <<"Bienvenido a su calculadora"<<endl;
 cout <<"Escoga la operacion que necesita"<<endl;
 cout <<"1. Suma"<<endl;
 cout <<"2. Resta"<<endl;
 cout <<"3. Multiplicacion"<<endl;
 cout <<"4. Division"<<endl;
 cin >> resp;
 if(resp==1)
 {
  cout <<"Digite el primer numero entero"<<endl;
  cin >> a;
  cout <<"Digite el segundo numero entero"<<endl;
  cin >> b;
  sum = a+b;
  cout << sum <<endl;
 }
 if(resp==2)
 {
  cout <<"Digite el primer numero entero"<<endl;
  cin >> a;
  cout <<"Digite el segundo numero entero"<<endl;
  cin >> b;
  rest = a-b;
  cout << rest <<endl;
 }
 if(resp==3)
 {
  cout <<"Digite el primer numero entero"<<endl;
  cin >> a;
  cout <<"Digite el segundo numero"<<endl;
  cin >> b;
  mul =a*b;
  cout << mul <<endl;
 }
 if(resp==4)
 {
  cout <<"Digite el primer numero entero"<<endl;
  cin >> a;
  cout <<"Digite el primer numero entero"<<endl;
  cin >> b;
  divi=a%b;
  cout << divi <<endl;
 }
return 0;
}
