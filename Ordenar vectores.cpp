//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main( )
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int vector[10];
int i,j,n,tiempo;
srand(time(0)); 
do
{
	cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
	cin>>n;
}while(n>10 or n<2);
for(i=0;i<n;i++)
{

vector[i]=rand()%10; 
cout<< "Vector "<<i<<" =" <<vector[i]<<"\n";

}
	for(i=0;i<n;i++)
	{
	for(j=i+1;i<n; j++)
	{
	if (vector[i]>vector[j])
	{
		tiempo=vector[j];
		vector[j]=vector[i];
		vector[i]=tiempo;
}
}
}
cout<<"Yector ordenado\n";
for(i=0;i<n;i++)
cout<< "Vector "<<i<<" ]="<<vector[i]<<"\n";
return 0;
}