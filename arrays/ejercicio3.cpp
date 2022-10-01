/* crea un array unidimensional con n numeros, lee los elementos por teclado, guardalos en el array,
calcula cual de los numeros es el mayor y cual es el menor de todos*/

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
   int length, menor, mayor;

   cout << "digite el tamano del array: ";
   cin >> length;

   int array[length];

   for (int i = 0; i < length; i++)
   {
      cout << "digite un numero: ";
      cin >> array[i];
   }

   mayor = array[0];
   menor = array[0];

   for (int i = 1; i < length; i++)
   {
      if (array[i] > mayor)
      {
         mayor = array[i];
      }
      if (array[i] < menor)
      {
         menor = array[i];
      }
   }
   cout << "El mayor elemento es " << mayor << endl;
   cout << "El menor elemento es " << menor << endl;

   return 0;
}