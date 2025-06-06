//Carlos Ivan Chairez Valenzuela NC#24040981//
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main ()
{
   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x,edad; char nom [10];
    
    x=1;
    do
    {
     cout<<x<<"\n";
     x++;
   }while(x<10);
   system("PAUSE");
   system ("CLS");
   do
   {
    cout<<"Dame la edad,<<0para terminar>>";
    cin>>edad;
   }while(edad!=0);
   system("PAUSE");
   return 0;
}