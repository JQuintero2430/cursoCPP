/* armar un arreglo con numeros aleatorios e imprimirlo */

#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{

   double numbers[8];

   numbers[0] = 1+rand() % (10 + 1 - 1);
   numbers[1] = 1+rand() % (10 + 1 - 1);
   numbers[2] = 1+rand() % (10 + 1 - 1);
   numbers[3] = 1+rand() % (10 + 1 - 1);
   numbers[4] = 1+rand() % (10 + 1 - 1);
   numbers[5] = 1+rand() % (10 + 1 - 1);
   numbers[6] = 1+rand() % (10 + 1 - 1);
   numbers[7] = 1+rand() % (10 + 1 - 1);

   for (int i = 0; i < 8; i++)
   {
      cout << numbers[i] << endl;
   }

   return 0;
}