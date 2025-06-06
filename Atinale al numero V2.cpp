//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <windows.h>
#include <iostream>
#include <time.h>
#include <iostream>
using namespace std;
int main( )
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int precio, x, limitesu, limiteinf;
do 
{
cout<<"Dame el limite inferior: ";
cin>>limiteinf;
cout<<"Dame el limite superior: ";
cin>>limitesu;
}while(limiteinf>=limitesu);
do
{
cout<<"Dime el precio entre "<<limiteinf<<" y "<<limitesu<<" ";
cin>>precio;
}while (precio<limiteinf or precio>limitesu);
do
{
cout<<"Atinale al precio: ";
cin>>x;
if (x>precio)
cout<<"Muy arriba\n";
else
if(x<precio)
cout<< "Muy abajo\n";
else
cout<<"Acertaste, el precio es: "<<precio;
}while(x!=precio);
return 0;
}