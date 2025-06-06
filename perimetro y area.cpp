//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
float ladol, lado2 , area, perimetro;
cout<<"Dame la medida del lado 1: ";
cin>>ladol;
cout<<"Dame la medida del lado 2: ";
cin>>lado2;
area=ladol*lado2;
perimetro=(ladol*2)+(lado2*2);
cout<<"El area mide: "<<area<<"\n";
cout<<"El perimetro mide: "<<perimetro<<"\n";
printf("El drea mide: %5.8f\n", area);
printf("El perimetro mide: %5.2f",perimetro);
return 0;
}