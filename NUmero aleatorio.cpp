//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main( )
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int precio, x;
srand(time(0)); 
precio=rand()%1001; 
do
{
cout<<"Dime el precio (entre 0 y 1000): ";
cin>>x;
if (x>precio)
cout<<"Muy arriba\n";
else
if (x<precio)
cout<< "Muy abajo\n";
else
cout<<"Acertaste, el precio es: "<<precio;
}while(x!=precio);
return 0;
}