//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int numh, numm, total;
float pacienth,pacientm;
cout<<"Dime la cantidad de hombres asistentes: ";
cin>>numh;
cout<<"Dime la cantidad de mujeres asistentes: ";
cin>>numm;
total=numh+numm;
cout<<"El total de asistentes es: "<<total<<"\n";
pacienth=numh*100/total;
pacientm=numm*100/total;
cout<<"Hombres: "<<pacienth<<"%"<<" Mujeres: "<<pacientm<<"%";
return 0;

}