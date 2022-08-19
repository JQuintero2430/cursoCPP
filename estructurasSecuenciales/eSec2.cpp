// programa para ingresar elradio de un circulo y reportar area 
// y longitud de la circunferencia

// area = pi * r^2
// longitud = 2 * pi * r

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double radio, area, length;
  const double pi = 3.141592653589793;

   cout << "Digita el radio" << endl;
   cin >> radio;

   area = pi * pow (radio, 2);
   length = 2 * pi * radio;

   cout << "El area del circulo es: "<< area << endl;
   cout << "La longitud de la circunferencia es: "<< length << endl;

   return 0;
}