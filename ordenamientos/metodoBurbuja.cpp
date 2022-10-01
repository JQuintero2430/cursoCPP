/* se realiza ejemplo del metodo burbuja */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{

   int array[5], aux, i = 0;
   bool ordered = false;

   cout << "digite los elementos del array" << endl;

   for (int i = 0; i < 5; i++)
   {
      cout << "digite un numero: ";
      cin >> array[i];
   }

   while (ordered == false && i < 4)
   {
      ordered = true;
      for (int j = 0; j < 4; j++)
      {
         if (array[j] > array[j + 1])
         {
            aux = array[j];
            array[j] = array[j + 1];
            array[j + 1] = aux;
            ordered = false;
         }
      }
      i++;
   }

   cout << "El array ordenado es; " << endl;
   for (int i = 0; i < 5; i++)
   {
      cout << array[i] << endl;
   }

   return 0;
}