// saber cuanto va apagar el cliente si la tienda tiene un 15% de descuento
#include <iostream>
#include <cmath>

using namespace std;

int main () {
   float price, discount, totalWDiscount;


   cout << "Digite el valor en $ de los productos desea comprar: "; 
   cin >> price;

   discount = price * 0.15; //Equivalente al 15%
   totalWDiscount = price - discount;

   cout << "El precio total que debera pagar con el descuento es de: " << totalWDiscount << "$" << endl;

   return 0;
}