//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream> 
#include <windows.h>
using namespace std;
int main()
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
char cadl[100],cad2[100];
int i,diferentes;
cout<<"Dame la primera cadena: ";
gets(cadl);
cout<<"Dame la segunda cadena: ";
gets(cad2);
diferentes=0;
 for(i=0;cadl[i]!='\0'||cad2[i]!='\0';i++){
	if(cadl[i]!=cad2[i]){
	diferentes=1;
	break;
}
}
if(diferentes==1){
cout<<"Las cadenas son diferentes";
}
else{
cout<<"Las cadenas son iguales";
}
return 0;
}