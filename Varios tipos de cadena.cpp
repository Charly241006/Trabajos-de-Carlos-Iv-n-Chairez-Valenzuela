//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <stdio.h>
#include <stdLib.h>
#include <iostream>
#include <conio.h> 

using namespace std;

int main( )

{
char cad[88];
char c; 
puts ("dame una cadena");
gets(cad); 
puts("Ejemplo de impresion con puts");
puts(cad);
printf("ejemplo de impresion con printf: ");
printf(cad); 
printf("\npresions una tecla y continua automaticamente: ");
c=getche(); 
puts("\n");
putchar(c); 
puts("\n");
printf("presiona una tecla y luego enter: ");
c=getchar();
putchar(c);
printf("\nPresions una tecla y continua automaticamente: ");
fflush(stdin);
printf("\n");
putchar(c);
return 0;

}