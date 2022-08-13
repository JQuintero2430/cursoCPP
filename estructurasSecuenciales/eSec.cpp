/*Calcuñlar la cantidad de segundos que estan incluidos en el número
de horas, minutos y segundos digitados porel usuario*/

#include <iostream>
using namespace std;

int main(){
   int horas,minutos, segs;
   int segsHoras, segsMinutos, totalSegs;

   cout<< "Digita la cantidad de horas: ";
   cin>> horas;
   cout<< "Digita la cantidad de minutos: ";
   cin>> minutos;
   cout<< "Digita la cantidad de segundos: ";
   cin>> segs;

   segsHoras = horas * 3600; // cantidad de seundos por hora introducida
   segsMinutos = minutos * 60; // cantidad de segundos por minuto introducido
   totalSegs = segsHoras + segsMinutos + segs;

   cout<<"\nLa cantidad de segundos totales son: "<<totalSegs<<endl;

   return 0;
}