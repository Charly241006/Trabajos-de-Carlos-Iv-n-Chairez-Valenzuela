//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
struct Estudiante {
string nombre;
int edad;
int calificaciones[5];
int promedio;
};
Estudiante estudiantel;
int suma=0;
cout<<"Ingresa el nombre del estudiante: ";
getline(cin, estudiantel.nombre);
cout<<"Ingresa la edad del estudiante: ";
cin>>estudiantel.edad;
cout<<"Ingresa las calificaciones de 5 materias:\n";
for (int i=0; i<5;i++) 
{
cout<<"Calificacién de la unidad "<<i+1<<": ";
cin>>estudiantel.calificaciones[i];
suma=suma+estudiantel.calificaciones[i];
}
estudiantel.promedio=suma/5;
cout<<"\nInformacion del estudiante:\n";
cout<<"Nombre: "<<estudiantel.nombre<<"\n";
cout<<"Edad: "<<estudiantel.edad<<"\n";
cout<<"Calificaciones: ";
for (int i=0;i<5;i++){
cout<<estudiantel.calificaciones[i]<<" ";
}
cout<<"\nPromedio: "<<estudiantel.promedio;
return 0;
}