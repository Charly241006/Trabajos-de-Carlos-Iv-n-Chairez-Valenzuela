//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int nip=123;
int intento;
cout<<"Teclea tu NIP ";
cin>>intento;
if(intento==nip)
{
cout<<"**Correcto**\n"<<intento<<" es tu numero de NIP";
}
else
{
cout<<"Incorrecto" ;
intento>nip?cout<<" Demasiado alto":cout<<"Demasiado bajo";
}
return 0;
}