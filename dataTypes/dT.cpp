//tipos de datos
#include <iostream>
#include <string.h>

using namespace std;

int main (){
   int number1 = 10; //dato entero
   float number2 = 13.13546; //dato real
   double number3 = 12321.6546865198744854; //dato real mas extenso
   bool mistery = false; //dato logico false = 0
   bool mistery2 = true; // dato logico true = 1
   char letra = 'r'; //dato string
   string cadena = "Hola como estas?"; //dato cadena de texto log


   cout <<"el valor entero es :" <<number1<<endl;
   cout <<"el valor decimal es :" <<number2<<endl;
   cout <<"el valor decimal es :" <<number3<<endl;
   cout <<"el valor buleano falso es :" <<mistery<<endl;
   cout <<"el valor buleano verdadero es :" <<mistery2<<endl;
   cout <<"el valor caracter es :" <<letra<<endl;
   cout <<"el valor palabra es :" <<cadena<<endl;


   return 0;
}