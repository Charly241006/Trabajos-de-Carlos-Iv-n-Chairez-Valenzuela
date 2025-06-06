#include <iostream> 
#include<windows.h>
using namespace std;
void cap(char arreglo[]);
void igs(char arreglo1[],char arreglo2[]);
int main()
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
char cadena[100],cadena2[100];
int a,dif;
cout<<"Dame la primera cadena: ";
cap(cadena);
cout<<"Dame la segunda cadena: ";
cap(cadena2);
igs(cadena,cadena2);
return 0;
}
void cap(char arreglo[]){
gets(arreglo);
}
void igs(char arreglo1[], char arreglo2[] ){
int dif=0;


for(int i=0;arreglo1[i]!='\0'||arreglo2[i]!='\0';i++)
{
		if(arreglo1[i]!=arreglo2[i]){
		dif=1;
		break;
	}
}
if(dif==1){
		cout<<"Las cadenas son diferentes";
	}
		else{
		cout<<"Las cadenas son iguales";
	}
}