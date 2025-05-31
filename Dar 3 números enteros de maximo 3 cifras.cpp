//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h> 
using namespace std;
int main(){
SetConsoleOutputCP (CP_UTF8);
SetConsoleCP(CP_UTF8);
char cad[80];
int num1,num2,num3;
puts ("Usando scanf con juegos de inspección");
puts ("Dame una cadena con espacios");
scanf("%s",cad);
cout<<cad<<"\n";
fflush(stdin);
puts ("Dame una cadena de mayúsculas y espacios");
scanf("%[ ABCDEFGHIIKLMNOPQRSTUVKXYZ]",cad);
puts (cad);
puts ("Dame una cadena de mayúsculas, minusculas,Ñ,ñ y espacios\n");
fflush(stdin);
scanf("%[ a-zA-ZÑñ]", cad);
cout<<cad<<"\n";
puts ("Dame una cadena con cualquier caracter y termina con enter");
fflush(stdin);
scanf ("%[^\n]",cad);
puts (cad);
puts ("Dame 3 numeros entero de maximo 3 cifras");
scanf("%3d %3d %3d",&num1,&num2,&num3);
printf("%d %d %d",num1,num2,num3);
printf("\a");
return 0;
}