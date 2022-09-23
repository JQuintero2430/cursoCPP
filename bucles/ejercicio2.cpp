/* Ingresa un numero y muestra la suma de cada una de sus cifras */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
   int numero, digito, suma = 0;

   cout << "Digite un numero: ";
   cin >> numero;

   while (numero != 0)
   {
      digito = numero % 10;
      numero /= 10;
      suma += digito;
   }

   if (suma < 0)
   {
      suma *= -1;
   }
   cout << "la suma de las cifras es: " << suma << endl;

   return 0;
}