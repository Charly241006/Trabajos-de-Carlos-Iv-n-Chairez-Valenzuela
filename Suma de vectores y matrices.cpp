//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <time.h>
#include <windows.h>
using namespace std;
int main( )
{
int m1[10][10];
int sumaRen[10],sumaCol[10];
int i,j,n,z;
srand(time(0)); 
do
{
	cout<<"Cuantos elementos por lado tienen matriz y vector? <2-10>";
	cin>>n;
}while(n>10 or n<2);
for(i=0;i<n;i++)
	{
	sumaRen[i]=0;
	sumaCol[i]=0;
}	
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			m1[i][j]=rand()%10;	
		}
	}
	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			sumaRen[i]=sumaRen[i]+m1[i][j];
		}
	}
	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
		sumaCol[i]=sumaCol[i]+m1[j][i];
		}
	}
	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			cout<<"["<<m1[i][j]<<"]";
		}
		cout<<"["<<sumaRen[i]<<"]\n";
		for(z=0;z<156465564481155;z++);
	}
		for(j=0;j<n;j++)
		{
			cout<<"\n["<<sumaCol[j]<<"]";
		}
		return 0;
	}
	