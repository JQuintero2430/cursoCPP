/* crear un arreglo unidimensional donde el usuario indique el tamaño por teclado, luego llenar el arreglo con números aleatorios entre  1 - 100
y por ultimo mostrar los elementos del arreglo */

#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int length;

cout << "digite el tamano del arreglo: ";
cin >> length;

int array[length];

srand (time (NULL)); //Encabezado para crear numeros aleatorios

// rellenamos el array con numeros aleatorios

for (int i = 0; i < length; i++) {
   array[i] = 1+rand () % (100+1-1); // sintaxis: el limite inferior, el signo +, la funcion "rand", el simbolo de modulo y entre parentesis el limite superior mas 1 menos el limite inferior
}

//imprimimos el array con numeros aleatorios

for (int i = 0; i < length; i++) {
   cout << "Array ["<<i<<"] = "<<array[i]<<endl;
}


return 0;
}