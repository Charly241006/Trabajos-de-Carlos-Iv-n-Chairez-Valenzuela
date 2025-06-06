//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) 
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main( )
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int num1, num2, num3, res;
char nombre[20];
gotoxy(25,2);
cout <<"INSTITUTO TECHOLOGICO DE DURANGO";
gotoxy(28,3);
cout<<"Fundamentos de Programación";
gotoxy(14,4);
cout<<"Programa que determina cual es el mayor de 3 números";
gotoxy(10,5);
cout<<"Dime tu nombre ";
gets(nombre);
gotoxy(10,6); cout<<"Dime el primer número: "; cin>>num1;
gotoxy(10,7); cout<<"Dime el segundo número: "; cin>>num2;
gotoxy(10,8); cout<<"Dime el tercer número: "; cin>>num3;
if (num1<num2 and num1<num3)
{
res=num1;
}
else
{
if (num2<num1 and num2<num3)
{
res=num2;
}
else
{
res=num3;
}
}
gotoxy(10,10);
cout<<nombre<<" el menor de los tres número es: "<<res;
return 0;
}