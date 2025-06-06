//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main () 
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int num, num2, dato, dato2;
	srand(time(0));
	int matriz[10][10], diags[2][10];
	
	do{
	 cout<<"Ingrese el tamaño de la matriz <2 - 10> \n";
	 cin>>dato;
	}while (dato<1 or dato>10);
	
	do{
	 cout<<"Ingrese cual es la cantidad de numero aleatorios (maximo 15) \n";
	 cin>>dato2;
	}while (dato2>15 );
	
	for (num=0; num< dato; num++){ //llenar la matriz//
		for (num2=0; num2<dato; num2++){
			matriz[num][num2]=rand()%dato2;
		}
	}
	cout<<"Esta es tu matriz aleatoria \n";
		for (num=0; num< dato; num++){ //imprimir la matriz//
		for (num2=0; num2<dato; num2++){
			cout<<matriz[num][num2]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Esta es su diagonal \n";
	for (num=dato-1; num>=0; num--){ //sacar diagonal//
		for (num2=dato-1; num2>=0; num2--){
			if (num==num2){
				cout<<matriz[num][num2];
			}
			cout<<"  ";
		}
		cout<<"\n";
}
num2=0;
cout<<"Esta es la diagonal inversa \n";
	for (num=dato-1; num>=0; num--){ 
				diags[num][num2]=matriz[num2][num];
				cout<<diags[num][num2];
				num2++;
		}
			
			
	return 0;
}

