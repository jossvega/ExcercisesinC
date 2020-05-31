#include <stdio.h>
 
  /* count characters in input; 1st version */
 
 ejemplo1while() {
 	
 	long nc;
 	nc = 0;
 	printf("En 3...2...1...\n");
 	while (getchar() != EOF){
 		printf("Hola soy nc y soy un...hdp que no doy %d\n", nc);
 		++nc;
	}
 	
	printf("%ld\n", nc);
 }
 
 
 ejemplofor () {
 	double nc;
	 for (nc = 0; getchar() != EOF; ++nc)
 	;
 	printf("%.0f\n", nc);
 }

 
 
 
 main() {
 	printf("empecé\n");
 	//ejemplo1while();
	ejemplofor();	
 	
 } 
 
 


