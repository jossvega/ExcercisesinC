#include <stdio.h>

/* copy input to output; 2nd version libro */
 ejemplodoslibro() {
	 int c;
 	while ((c = getchar()) != EOF)
 putchar(c);
 }

/* copy input to output; 1st version */ 
 ejemplolibro() {
 	int c;
 	c = getchar();
 	while (c != EOF) {
 		putchar(c);
 		c = getchar();
 	}
 }
/*ejemplo1.7*/

ejemploejersicio () {
	printf("The value of EOF is %d Assuming senthil is a total cupper.",EOF);
    return 0;

}

/* copy input to output; 2nd version */
ejemploturotialspoint() {

   int c;

   printf( "Enter a value :");
   c = getchar( );

   printf( "\nYou entered: ");
   putchar( c );

   return 0;
}

 main(){
 	//ejemplolibro();
 	//ejemplodoslibro();
 	ejemploejersicio ();
	 //ejemploturotialspoint(); 	
 }
 
 
