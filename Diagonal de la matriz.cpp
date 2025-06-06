//Chairez Valenzuela Carlos Iván N.C. 24040981//
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
int main () {
	int num, num2, dato, dato2;
	srand(time(0));
	int matriz[10][10];
	
		for (num=0; num<10; num++){ //llenar la matriz//
		for (num2=0; num2<10; num2++){
			matriz[num][num2]=rand()%10;
		}
	}
	cout<<"Esta es tu matriz aleatoria \n";
		for (num=0; num<10; num++){ //imprimir la matriz//
		for (num2=0; num2<10; num2++){
			cout<<matriz[num][num2]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Esta es su diagonal \n";
	for (num=10-1; num>=0; num--){ //sacar diagonal//
		for (num2=10-1; num2>=0; num2--){
			if (num==num2){
				cout<<matriz[num][num2];	
			}
			cout<<"  ";
		}
		cout<<"\n";
	}
return 0;	
}