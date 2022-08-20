// calcular porcentaje de hombre y mujeres de la clase

#include <iostream>
#include <cmath>
using namespace std;

int main(){
int hombres, mujeres, totalEst;
double porcentajeH, porcentajeM;

   cout << "Digite el numero de hombres que hay en la clase" << endl;
   cin >> hombres;
   cout << "Digite el numero de mujeres que hay en la clase" << endl;
   cin >> mujeres;

   totalEst = hombres + mujeres;
   porcentajeH = (double) hombres *100 / totalEst;
   porcentajeM = (double) mujeres *100 / totalEst;

   cout << "El porcentaje de hombres en la clase es del: "<< porcentajeH << "%" << endl;
   cout << "Y el porcentaje de mujeres en la clase es del: "<< porcentajeM << "%" << endl;


   return 0;
}