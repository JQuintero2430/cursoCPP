/* determinar si un alumno aprueba o desaprueba. 
aprobara si el promedio de sus 3 calificaciones es mayor a 70 */

#include <iostream>
using namespace std;

int main()
{
   float nota1, nota2, nota3,calificacionTotal;
   cout << "digite la primera calificacion: ";
   cin >> nota1;
   cout << "digite la segunda calificacion: ";
   cin >> nota2;
   cout << "digite la ultima calificacion: ";
   cin >> nota3;

   calificacionTotal = (nota1 + nota2 + nota3)/3;
   
   if (calificacionTotal>= 70){
      cout << "Su calificacion final es "<< calificacionTotal<<" por lo tanto ud ha aprobado la asignatura";
   }
   else{
      cout << "Su calificacion final es "<< calificacionTotal<<" por lo tanto ud ha reprobado la asignatura"<<endl;
   }

   return 0;
}