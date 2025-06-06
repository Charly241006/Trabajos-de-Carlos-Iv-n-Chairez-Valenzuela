//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
char a;
int opcion;
cout<<"Dane un valor binario 0/1 ";
cin>>a;
switch(a)
{
case '0':
cout<<"Falso o apagado\n";
break;
case '1':
cout<<"Cierto o encendido\n";
break;
default:
cout<<"Tecleaste un valor incorrecto\n";
}
system("pause");
system("cls");
printf("1. -QUIMICA\n"); 
cout<<"2. -FISICA\n";
printf("3. -MATEMATICAS\n");
printf("4. -RECREO\n");
printf("SELECCIONA UNA OPCION: ");
cin>>opcion;
switch(opcion)
{
case 1:printf("SELECCIONASTE QUIMICA");
break;
case 2:printf("SELECCIONASTE FISICA");
break;
case 3:printf("SELECCIONASTE MATEMATICAS");
break;
case 4:puts("SELECCIONASTE RECREO");
break;
default:
printf("\aSELECCIONASTE UNA OPCION NO VALIDA");
}
return 0;
}