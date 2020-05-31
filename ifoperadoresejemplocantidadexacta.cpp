#include "stdio.h"

/*Hacer un programa que realice descuentos en base a lo siguiente:

Si la compra es menor a 500 no hay descuento
Si es entre 500 y 1000, 10% de descuento
Si es entre 1000 y 2000, 20% de descuento
Si es mayor a 2000, 30% de descuento */



int main(){
   float compra, descuento, total;
   printf("Monto de la compra: ");
   scanf("%f",&compra);
   if (compra < 500){
      descuento = 0;
   }
   if (compra >= 500 && compra < 1000){
      descuento= compra * .10;
   }
   if (compra >= 1000 && compra < 2000){
      descuento = compra * .20;
   }
   if (compra >= 2000){
      descuento = compra * .30;
   }
   total = compra - descuento;
   printf("Su descuento es: %.2f", descuento);
   printf("\nEl total a pagar es: %.2f", total);  
}
