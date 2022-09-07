/* leer tres numeros e imprimir el mayor */

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){
int number1, number2, number3;

cout << "Digite tres numeros: ";
cin >> number1 >> number2 >> number3;

if (number1 >= number2 && number1 >= number3) {
   cout << "El numero mayor es: "<<number1 << endl;
}
else if (number2 >= number3 && number2 >= number1) {
   cout << "El numero mayor es: "<<number2 << endl;
}
else {
   cout << "El numero mayor es: "<<number3 << endl;
}
getch ();
return 0;
}