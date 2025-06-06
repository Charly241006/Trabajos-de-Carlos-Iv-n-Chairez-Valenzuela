//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{

int x, num;
cout<<"Dime cual tabla quieres generar: ";
cin>>num;
for (x=1;x<11;x++)
{
cout<<num<<" X "<<x<<" = "<<num*x<<"\n";
}
for(x=1;x<11;x++)
{
printf ("%2d X %d = %3d\n",num,x,num*x);
}
return 0;
}