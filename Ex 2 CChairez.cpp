#include <iostream>
#include <windows.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, base, altura, semi, res, areah, areag, dato;
	cout<<"Dame la medidad del lado 1 \n";
	cin>>a;
	cout<<"Dame la medidad del lado 2 \n";
	cin>>b;
	cout<<"Dame la medidad del lado 3 \n";
	cin>>c;
	cout<<"Dame la base \n";
	cin>>base;
	cout<<"Dame la altura \n";
	cin>>altura;
	res=a+b;
	dato=(res>c) ? res:c;
	dato:cout<<"Si se puede hacer un triangulo \n";
	system("pause");
	semi=(a+b+c)/2;
	areah=sqrt(semi*(semi-a)*(semi-b)*(semi-c));
	areag=(base*altura)/2;
	cout<<"Si se puede hacer un triangulo \n";
	cout<<"El area del triangulo calculada con la formula de Heron es "<<areah<<"\n";
	cout<<"El area del triangulo calculada con la formula de base es "<<areag<<"\n";
	return 0;

}