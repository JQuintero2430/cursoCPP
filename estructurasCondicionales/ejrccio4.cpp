/* elaborar un programa que muestre los días de la semana cuando se ingresan los numeros del 1 al 7*/

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){
int numero;

cout << "Digite un numero del 1 al 7: " << endl;
cin >> numero;
switch (numero ) {
   case 1 : cout << "el dia que corresponde al numero es el lunes";
   break;
   case 2 : cout << "el dia que corresponde al numero es el martes";
   break;
   case 3 : cout << "el dia que corresponde al numero es el miercoles";
   break;
   case 4 : cout << "el dia que corresponde al numero es el jueves";
   break;
   case 5 : cout << "el dia que corresponde al numero es el viernes";
   break;
   case 6 : cout << "el dia que corresponde al numero es el sabado";
   break;
   case 7 : cout << "el dia que corresponde al numero es el domingo";
   break;
   default : cout << "el caracter escrito no es un numero entero entre el 1 y el 7" << endl;

}

getch ();
return 0;
}