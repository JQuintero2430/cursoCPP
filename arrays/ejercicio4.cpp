/* leer por teclado una serie de 5 numeros reales, el programa debe indicarnos si los numeros estan ordenados
de forma creciente, decreciente  o si estan desordenados */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{

   float array[5];
   bool creciente = false, decreciente = false;

   for (int i = 0; i < 5; i++)
   {
      cout << "digite un numero real: " << endl;
      cin >> array[i];
   }
   for (int i = 0; i < 4; i++)
   {
      if (array[i] < array[i + 1])
      {
         creciente = true;
      }
      if (array[i] > array[i + 1])
      {
         decreciente = true;
      }
   }
   if (creciente == true && decreciente == false)
   {
      cout << "El array esta ordenado de forma creciente" << endl;
   }
   else if (creciente == false && decreciente == true)
   {
      cout << "El array esta ordenado de forma decreciente" << endl;
   }
   else
   {
      cout << "El array esta desordenado" << endl;
   }
   return 0;
}