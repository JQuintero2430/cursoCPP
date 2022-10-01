/*  */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
   int i = 0, array[5], dato, position;
   bool found = false;

   cout << "Digite los elementos del array" << endl;

   for (int i = 0; i < 5; i++)
   {
      cout << i + 1 << ". Digite un numero: " << endl;
      cin >> array[i];
   }

   cout << "Digite el elemento que desea buscar: " << endl;
   cin >> dato;

   while (i < 5 && found == false)
   {
      if (array[i] == dato)
      {
         found = true;
         position = i;
      }
      i++;
   }
   if (found == true)
   {
      cout << "El numero " << dato << " fue hallado en el indice: " << position << endl;
   }
   else
   {
      cout << "El numero de que desea buscar no se encuentra dentro del arreglo" << endl;
   }

   return 0;
}