// entrada y salida de información
#include<iostream>
using namespace std;

int main (){ 
   //Primero defino una variable de tipo string
   string name;

   cout << "Digite su nombre: "; //realizo salida de texto
   getline (cin, name); //realizo entrada de texto
   cout << "Mi nombre es: "<<name<<endl; //imprimo resultado

   /* para poder ejecutar en orden defino una segunda variable
   luego de haber resuelto la operacion de arriba*/
   double number; // defino una variable de tipo double
   cout << "Digite un numero: ";  //realizo salida de texto
   cin>> number; //realizo entrada de dato
   cout << "el valor es: "<<number<<endl; //imprimo resultado

   return 0;
}