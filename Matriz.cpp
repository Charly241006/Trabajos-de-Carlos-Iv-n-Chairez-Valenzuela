//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <stdio.h>
#include <time.h>
using namespace std;
int main( )
{
int matriz[5][5];
int i, j;
srand(time(0)); 
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		matriz[i][j]=rand()%100;
	}
}
for(i=0;i<5;i++)
	{
	for(j=0;j<5; j++)
	cout<<matriz[i][j]<<" ";
	cout<<"\n";
}
	
	return 0;
}