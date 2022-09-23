/* Hallar el factorial de un numero mayor o igual a 0 */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
   int numero, factorial = 1;

   do
   {
      cout << "digite un numero: ";
      cin >> numero;
   } while (numero < 0);
   for (int i = 1; i <= numero; i++)
   {
      factorial *= i;
   }

   cout << "El factorial del numero es: " << factorial << endl;

   getch();
   return 0;
}