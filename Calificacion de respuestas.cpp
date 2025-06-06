//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int correctas,incorrectas,blanco,final;
cout<<"Las respuestas correctas valen 5 puntos c/u\n";
cout<<"Las respuestas incorrectas restan 1 punto c/u\n";
cout<<"Las respuestas en blanco valen @ puntos c/u\n";
cout<<"Dime la cantidad de respuestas correctas: ";
cin>>correctas;
cout<<"Dime la cantidad de respuestas incorrectas: ";
cin>>incorrectas;
cout<<"Dime la cantidad de respuestas en blanco: ";
cin>>blanco;
final=(correctas*5)+(incorrectas*(-1))+(blanco*0);
cout<<"La calificación final es: "<<final;
printf("\nLa calificacién final es: %d",final);
final=correctas*5-incorrectas;
cout<<"\nLa calificacién final es: "<<final;
printf("\nLa calificacién final es: %d",final);
return 0;
}