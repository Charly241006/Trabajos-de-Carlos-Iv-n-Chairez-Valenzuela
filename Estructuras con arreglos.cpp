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
int calificaciones[3]; 
};
int numEstu;
cout<<"Ingresa la cantidad de estudiantes: ";
cin>>numEstu;
cin.ignore();
Estudiante estudiantes[numEstu];
for (int i=0; i<numEstu;i++) 
{
cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";
cout << "Nombre: ";
getline(cin,estudiantes[i].nombre);
cout<<"Edad: ";
cin>>estudiantes[i].edad;
cout<<"Ingresa las calificaciones de 3 materias:\n";
for(int j=0;j<3; j++)
{
cout<<"Calificacidn #"<<j+1<<": ";
cin>>estudiantes[i].calificaciones[j];
}
cin.ignore();
}
cout<<"\nInformacién de los estudiantes:\n";
for (int i=0;i<numEstu;i++)
{
cout<<"\nEstudiante #"<<i+1<<": ";
cout<<"Nombre: "<<estudiantes[i].nombre<<" ";
cout<<" Edad: "<<estudiantes[i].edad<<" ";
cout<<" Calificaciones: ";
for(int j=0;j<3;j++)
{
cout<<estudiantes[i].calificaciones[j]<<" " ;
}
cout<<"\n";
}
return 0;
}