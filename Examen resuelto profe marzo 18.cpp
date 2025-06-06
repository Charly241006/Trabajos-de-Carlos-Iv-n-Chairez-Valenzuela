//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <math.h> 
#include <Windows.h> 
using namespace std;
int main()
{
SetConsoleOutputCP (CP_UTF8);
SetConsoleCP(CP_UTF8);
float a,b,c,base,altura,s,areaHeron, areaTradicional;
int valido;
cout<<"Dame el valor del lado a: ";
cin>>a;
cout<<"Dame el valor del lado b: ";
cin>>b;
cout<<"Dame el valor del lado c: ";
cin>>c;
valido=(a+b>c&&a+c>b&&b+c>a)?1:8;
valido==1?cout<<"Lados validos, se calculara el area.\n":cout<<"Los lados no validos, se calcula el area a pesar de eso.\n";
s=(a+b+c)/2;
areaHeron=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Dame la base del triangulo: ";
cin>>base;
cout<<"Dame la altura del triingulo: ";
cin>>altura;
areaTradicional=(base*altura)/2;
cout<<"Area usando la formula de Herón: "<<areaHeron<<"\n"<<"Area usando la formula tradicional: "<<areaTradicional<<"\n";
return 0;
}