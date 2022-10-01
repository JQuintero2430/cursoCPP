/* crea un array unidimensional con n caracteres lee los elementos por teclado, guardalos en el array y muestralos en el orden inverso al introducido */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
   int length;

   cout << "digite el tamano del array: ";
   cin >> length;

   char array[length];

   for (int i = 0; i < length; i++)
   {
      cout << "digite un caracter: ";
      cin >> array[i];
   }
   cout << endl;

   for (int i = length - 1; i >= 0; i--)
   {
      cout << array[i] << endl;
   }

   return 0;
}