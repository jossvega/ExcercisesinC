#include<stdio.h>

/*identificar cuando un número es nulo, positivo o negativo.*/

int main() {
	
   int n;
   printf("Escriba un numero:\t");
   scanf("%d", &n);
   if (n==0){
      printf("Es nulo");
   }
   else{
      if (n<0){
      printf("Es negativo");
      }
      else{
         printf("Es positivo");
      }
   }
}
