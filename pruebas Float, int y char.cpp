//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
char palabra;
char letras[20]="Hexadecimal";
int num;
float num2;
num=10;
num2=123.45;
palabra='x';
printf ("Impresión simple\n");
printf("La variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s",palabra,num,num2,letras);
system("pause");
printf("Impresion sin espacios \n");
printf("%d%f%c%s\n",num,num2,palabra,letras);
printf("Impresion con etiquetas\n");
printf("Entero: %d Flotante: %f Caracter: %c Cadena: %s\n",num,num2,palabra,letras);
system("pause");
printf("Dame un entero: ");
fflush(stdin);
scanf("%d",&num);
puts("Dame un flotante: ");
fflush(stdin);
scanf("%f" ,&num2);
cout<<"Dame un caracter: ";
fflush(stdin);
palabra=getchar();
printf ("Dame una cadena: ");
fflush(stdin);
scanf("%[^\n]",letras);
printf("entero: %d, flotante: %f, caracter: %c, cadena: %s\n",num,num2,palabra,letras);
num=12345;
num2=345.678;
printf("Probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
printf("%3d %5d %8d\n",num,num,num);
printf("%3d %5d %8d\n",1,10,20);
printf("%3d %5d %8d\n",num,num,num);
printf ("%d %d %d\n",1,10,20);
system("pause");
printf ("probando anchos en floats: 3, 10 y 13 espacios\n");
printf ("%3f %10f %13f\n",num2,num2,num2);
system("pause");
printf ("Probando anchos en exp: 3, 13 y 16 espacios\n");
printf("%3e %13e %16e\n",num2,num2,num2);
system("pause");
num2=123.456;
printf ("Probando diferentes cantidades de cifras 7.0, 7.3 y 7.1\n");
printf ("%7.0f %7.3f %7.1f\n",num2,num2,num2); 
system("pause");
printf ("Especificando solo las cifras decimales 1 decimal\n");
printf ("%.1f\n",num2);
system("pause");
printf ("Probando diferentes precisiones en cadenas: 10, 15 y 15.5 y .5\n");
printf ("%10s %15s %15.5s %.5s",letras,letras, letras,letras);
system("pause");
printf ("Impresion con signo: %+d\n", num);
printf ("Impresion con espacios al principio y al final del dato y con ceros\n");
printf ("%3d %5d %8d\n",num,num,num);
printf ("%-3d %-5d %-8d\n",num,num,num);
printf ("%03d %05d %08d\n",num,num,num);
system("pause");
printf("%d en octal es %#o y en hexadecimal es %#x", num,num,num);
return 0;
}