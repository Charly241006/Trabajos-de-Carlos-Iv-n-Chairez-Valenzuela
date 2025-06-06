//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
char cadena[15];
int letra,i;
cout<<"Dame una palabra en minusculas: ";
gets(cadena);
letra=strlen(cadena);
for(i=0;i<letra;i++)
	cadena[i]=toupper(cadena[i]);
	cout<<"Impresion de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresion elemento per elemento\n";
for (int i=0;i<letra;i++)
	cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
return 0;
}