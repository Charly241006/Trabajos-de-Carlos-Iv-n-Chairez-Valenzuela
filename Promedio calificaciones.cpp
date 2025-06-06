//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
float calif1=0.0;
float calif2=0.0;
float calif3=0.0;
float promedio=6.0;
cout<<"Dame la calificacién 1: ";
cin>>calif1;
cout<<"Dame la calificacién 2: ";
cin>>calif2;
cout<<"Dame la calificacién 3: ";
cin>>calif3;
promedio=(calif1+calif2+calif3)/3;
cout<<"E1l promedio de calificaciones es: "<<promedio<<"\n";
system("pause");
printf("Dame la calificacién 1: ");
scanf("%f",&calif1);
printf("Dame la calificacién 2: ");
scanf("%f",&calif2);
printf( "Dame la calificacién 3: ");
scanf("%f",&calif3);
promedio=(calif1+calif2+calif3)/3;
printf("El promedio de calificaciones es: %7.2f",promedio);
return 0;
}