//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
using namespace std;
void parImpar(int numero);
int main(){
int numero;
cout<<"Ingrese un numero: ";
cin>>numero;
parImpar (numero);
cout<<"Ingrese otro numero: ";
cin>>numero;
parImpar (numero);
return 0;
}
void parImpar(int numero){
if (numero%2==0)
cout<<"El numero es par.\n";
else
cout<<"€l numero es impar.\n";
}