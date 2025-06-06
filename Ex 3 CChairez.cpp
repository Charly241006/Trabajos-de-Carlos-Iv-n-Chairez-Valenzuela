//Carlso Iván Chairez Valenzuela NC#24040981 
// Luis Andres Contreras Alvarado NC#24040984
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);
int lado1, lado2, lado3;
cout<< "Dame el lado de un triangulo \n";
cin>>lado1;
cout<< "Dame el lado de un triangulo \n";
cin>>lado2;
cout<< "Dame el lado de un triangulo \n";
cin>>lado3;
	if (lado1==0 or lado2==0 or lado3==0)
	{
		cout<<"El programa esta mal, pon tus datos de nuevo";
	}
	else {
	
	    if (lado1<(lado2+lado3) && lado2<(lado3+lado1) && lado3<(lado1+lado2)){
	    	if (lado1==lado2 and lado2==lado3){
	    	cout<<"Tu triangulo es equilatero \n";
			    }
			
	    	else if (lado1==lado2 or lado2==lado3 or lado1==lado3){
			
			
	    		cout<<"tu triagunlo es isóceles \n";
			}
			else {
				cout<<"Tu triuangulo es escaleno \n";
			}
		}
		
		else {

		cout<<"El programa no puede funcionar, cambia los datos";
		}		
		}	

return 0;
}