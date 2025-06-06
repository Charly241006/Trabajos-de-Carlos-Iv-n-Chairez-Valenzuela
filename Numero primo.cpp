//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>  
#include <time.h>    
#include <windows.h> 
using namespace std;

int main(){
int z=0,x;
cout<<"dame un numero y yo te digo si es primo o no: ";
    cin>>x;
    for(int i=2;i<x-1;i++){
        if(x%i==0){
            z=1;
            break;
        }
    }
     if(z==0){
    cout<<"tu numero es primo...";}
    else{
        cout<<"tu numero no es primo...";
    }
}