//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
int x, c=0;
float sueldo,total;
char opcion,nombre[10];
while(c!=0)
{
cout<<"Esto nunca se imprime";
}
x=1;
while(x<11)
{
	cout<<x<<"\n";
	x++;
}
system("pause");
opcion='s';
while(opcion=='s' or opcion=='S')
{
system("CLS");
cout<<"Dame tu nombre "; 
fflush(stdin); 
gets (nombre);
cout<<"Dame tu sueldo ";cin>>sueldo;
total+=sueldo;
printf("Deseas capturar otro empleado <<s/n>>? ");
cin>>opcion;
}
printf("Total de salarios= $%5.2f\n",total);
cout<<"Despues de la pausa el programa se cicla\n";
system("PAUSE");
x=0;
while(x<10);
{
	cout<<x<<"\n";
	x++;
}
return 0;
}