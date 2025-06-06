//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int minutos, horas, minutos2;
cout<<"Dame la cantidad de minutos a convertir: ";
cin>>minutos;
horas=minutos/60;
minutos2=minutos%60;
cout<<minutos<<" minutos equivale a "<<horas<<":"<<minutos2<<"\n";
printf("%2d minutos equivalen a %02d:%02d", minutos, horas,minutos2);
return 0;
}