/* armar un arreglo con numeros aleatorios e imprimirlo */

#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{

   double numbers[8];

   numbers[0] = rand();
   numbers[1] = rand();
   numbers[2] = rand();
   numbers[3] = rand();
   numbers[4] = rand();
   numbers[5] = rand();
   numbers[6] = rand();
   numbers[7] = rand();

   for (int i = 0; i < 8; i++)
   {
      cout << numbers[i] << endl;
   }

   return 0;
}