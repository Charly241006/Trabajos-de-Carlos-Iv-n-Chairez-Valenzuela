//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
int num, suma,x;
float promedio;
num=0;
suma=0;
for (x=1;x!=-1;)
{
cout<<"Dame un numero, -1 para terminar: ";
cin>>x;
num++;
suma=suma+x;
}
suma++;
num=num-1;
promedio=suma/num;
cout<<"Fueron "<<num<<" numeros\n";
cout<<"La sumatoria es="<<suma<<"\n";
cout<<"El promedio es="<<promedio<<"\n";
return 0;
}