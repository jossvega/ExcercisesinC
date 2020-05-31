#include<stdio.h>



int main(){
  int saldo=0, deposito=0, retiro=0, opcion=0;
  printf("Introduzca saldo inicial: ");
  scanf("%d", &saldo);
  while(opcion != 5){
    printf("===Bienvenido al banco===");
    printf("\nElija una opcion");
    printf("\n1. Depositar");
    printf("\n2. Retirar");
    printf("\n3. Ver saldo");
    printf("\n4. Abonar intereses");
    printf("\n5. Salir\n");
    printf("Su opcion: ");
    scanf("%d", &opcion);
    
    if (opcion == 1){
        printf("Monto a depositar: ");
        scanf("%d", &deposito);
        saldo = saldo + deposito;
    }
    if (opcion==2){
    	printf("Monto a retirar: ");
		scanf("%d", &retiro);
		if (retiro > saldo){
			printf("Saldo insuficiente, intente nuevamente");		
		}else {
			saldo= saldo - retiro;			
		}
	}
   		 /* ejemplo de segunda loucion a dilema de opcion 2
    
    	float saldo, deposito, retiro;
   		saldo = 300;
   		printf("Cuanto deposita: ");
   		scanf("%f", &deposito);
   		saldo = saldo + deposito;
   		printf("Cuanto retira: ");
   		scanf("%f", &retiro);
   		if (retiro <= saldo){
     	saldo = saldo - retiro;
    	printf ("Su nuevo saldo es: %.2f", round(saldo));
 		}
  		else{
  		printf("No hay suficiente saldo");
  		 }
}
*/
    
    if (opcion == 3){
        printf("\nSu saldo es: %d", saldo);
    }
    if (opcion == 5){
        printf("\nGracias por usar este programa");
    }
  }
}
