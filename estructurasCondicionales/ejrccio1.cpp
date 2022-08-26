/* ingresar un numero entero y determinar si es par o impar */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   int numero;

   cout << "Digite un numero entero: ";
   cin >> numero;
   if (numero % 2 == 0)
   {
      cout << "el numero " << numero << " es par" << endl;
   }
   else
   {
      cout << "el numero " << numero << " es impar" << endl;
   }
   return 0;
}