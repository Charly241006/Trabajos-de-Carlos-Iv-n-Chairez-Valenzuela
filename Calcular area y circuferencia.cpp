//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8); 
SetConsoleCP(CP_UTF8);
float ra, a=0.0, circu=0.0;
const float PI=3.1416;
cout<<"PI="<<PI<<"\n";
cout<<fixed;
cout.precision(4);
cout<<"Dame el radio de un circulo: ";
cin>>ra;
a=PI*ra*ra;
circu=PI*ra*2;
cout<<"Usando precision a cuatro decimales con fixed\n";
cout<<"Para un circulo de radio: "<<ra<<"\n";
cout<<"El area es: "<<a<<"\n";
cout<<"La circunferencia es: "<<circu<<"\n";
cout<<"Usando precision a dos decimales con printfin";
printf("Para un circulo de radio: %5.2f \n",ra);
printf("El area es: %5.2f\n",a);
printf("La circunferencia es: %5.2f\n",circu); 
return 0;
}