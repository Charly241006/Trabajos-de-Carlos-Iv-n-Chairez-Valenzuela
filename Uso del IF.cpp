//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int calif;
cout<<"Dime una calificacion:";
cin>>calif;
if (calif>=78)
cout<<"Aprobatoria\n";
system("pause") ;
system("cls");
cout<<"Dime otra calificación: ";
cin>>calif;
if (calif>=78)
cout<<"suficiente\n";
else
cout<<"No Suficiente\n";
system("pause") ;
system("cls");
cout<<"Dime una calificación: (Evaluando con ?) ";
cin>>calif;
calif>=78?cout<<"Suficiente\n":cout<<"No suficiente\n";
cout<<"Dime una calificacién: ";
cin>>calif;
if (calif>=78)
{
printf("La calificacién obtenida es: ");
cout<<"suficiente\n";
}
else
{
printf("La calificacién obtenida es: ");
cout<<"No Suficiente\n";
return 0;
}
}