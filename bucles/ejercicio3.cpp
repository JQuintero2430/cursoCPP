/* hacer un programa que pida n numeros al usuario hasta que el usuario decida y calcular el promedio de dichos numeros*/

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){
int number, suma = 0, conteo = 0, promedio;
char response;

do {
   cout << "digite un numero: ";
   cin >> number;

   suma += number;
   conteo++;
   

   cout << "desea introducir otro numero (s/n): ";
   cin >> response;

}while(response == 's');

promedio = suma / conteo;

cout << "el promedio de los numeros digitados es: " << promedio << endl;

return 0;
}