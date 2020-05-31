#include<stdio.h>
#include "string.h"

condicionalV1(){
		/*los valores son N=persona natural, J=persona jurídica,
	P=cuenta procpia, Cm=cuenta compartida y C=cliente*/
	
	char tipoCliente [2];
	char tipoCuenta [2];
	int estadoDeCuenta;
	
	printf ("por favor introduce ¿Que tipo de cliente es, Persona Natural (n) O Persona Jurídica (j)?\n");
	scanf("%s", &tipoCliente);	
	
	printf ("por favor introduce ¿Que tipo de cuenta tiene, Propia (p) o Compartida (c)?\n");
	scanf("%s", &tipoCuenta);	
	
	printf ("por favor introduce ¿En que estado se encuentra el cliente, Activo (1) o Inactivo (0)?\n");
	scanf("%d", &estadoDeCuenta);	
	
	printf("El cliente Actualizado es : %s, %s, %d\n" , tipoCliente, tipoCuenta, estadoDeCuenta);
	
	
	if (strcmp (tipoCliente, "j")==0) {
		printf("El cliente se ha Actualizado como Empresa");
	}else if ((strcmp(tipoCliente,"n")==0) && estadoDeCuenta==0){
		printf("El cliente es Persona Natural con Estado de Cuenta Inactiva");
	}else if ((strcmp(tipoCliente,"n")==0) && (strcmp(tipoCuenta,"p")==0) && estadoDeCuenta==1) {
		printf("El cliente es Persona Natural con cuenta Propia y Estado de Cuenta Activa");
	}
	else {
		printf("El cliente ya se encuentra Actualizado");
	}
	return 0;
}


condicionalV2(){
	/*los valores son N=persona natural, J=persona jurídica,
	P=cuenta procpia, Cm=cuenta compartida y C=cliente*/
	
	char tipoCliente [2];
	char tipoCuenta [2];
	int estadoDeCuenta;
	
	printf ("por favor introduce ¿Que tipo de cliente es, Persona Natural (n) O Persona Jurídica (j)?\n");
	scanf("%s", &tipoCliente);	
	
	printf ("por favor introduce ¿Que tipo de cuenta tiene, Propia (p) o Compartida (c)?\n");
	scanf("%s", &tipoCuenta);	
	
	printf ("por favor introduce ¿En que estado se encuentra el cliente, Activo (1) o Inactivo (0)?\n");
	scanf("%d", &estadoDeCuenta);	
	
	printf("El cliente Actualizado es : %s, %s, %d\n" , tipoCliente, tipoCuenta, estadoDeCuenta);
	
	
	if (strcmp (tipoCliente, "j")==0) {
		printf("El cliente se ha Actualizado como Empresa");
	}else if (estadoDeCuenta==0 ||(estadoDeCuenta==1 && (strcmp(tipoCuenta,"p")==0) )){
		printf("El cliente es Persona Natural con Estado de Cuenta %d y tipo de cuenta %s \n", estadoDeCuenta, tipoCuenta);
	}
	else {
		printf("El cliente ya se encuentra Actualizado");
	}
	return 0;
}
	
	
main () {
//condicionalV1();
condicionalV2();
}
