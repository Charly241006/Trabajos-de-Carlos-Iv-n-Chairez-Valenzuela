//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
string nombre;
int calif1, calif2, calif3, promedio;
cout<<"Dime tu nombre: ";
cin>>nombre;
cout<<"Dame 1a calificación 1: ";
cin>>calif1;
cout<<"Dame 1a calificación 2: ";
cin>>calif2;
cout<<"Dame 1a calificación 3: ";
cin>>calif3;
promedio=(calif1+calif2+calif3)/3;
cout<<nombre<<", tu promedio es; "<<promedio<<", y tu calificación Final es: ";
if (promedio>=90 and promedio<=100)
{
cout<< "a";
}
else
{
if (promedio>=80 and promedio<=89)
{
cout<<"b";
}
else
{
if(promedio>=70 and promedio<=79)
{
cout<<"c";
}
else
{
if (promedio>=60 and promedio<=69)
{
cout<<"d";
}
else
{
cout<<"NA";
}
}
}
}
return 0;
}