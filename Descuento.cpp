//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
float precio,des,preciot,descuentofin;
cout<<"Dime el precio normal: ";
cin>>precio;
cout<<"Dime el porcentaje de descuento: ";
cin>>des;
descuentofin=precio*des/100;
preciot=precio-descuentofin;
cout<<"El precio con descuento es: "<<preciot;
cout<<"\nEl precio con descuento es: "<<precio*(100-des)/100;
return 0;
}