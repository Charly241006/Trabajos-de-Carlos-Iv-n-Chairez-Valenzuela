//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8); 
SetConsoleCP(CP_UTF8);
float radio, num=0.0, circuferencia=0.0;
const float PI=3.1416;
cout<<"PI="<<PI<<"\n";
cout<<fixed;
cout.precision(4);
cout<<"Dame el radio de un circulo: ";
cin>>radio;
num=PI*radio*radio;
circuferencia=PI*radio*2;
cout<<"Usando precision a cuatro decimales con fixed\n";
cout<<"Para un circulo de radio: "<<radio<<"\n";
cout<<"El area es: "<<num<<"\n";
cout<<"La circunferencia es: "<<circuferencia<<"\n";
cout<<"Usando precision a dos decimales con printfin";
printf("Para un circulo de radio: %5.2f \n",radio);
printf("El area es: %5.2f\n",num);
printf("La circunferencia es: %5.2f\n",circuferencia); 
return 0;
}