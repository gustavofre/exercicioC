#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i; 
int calculo;

int main (void){


for ( i=0 ; i<10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );	
	calculo+= numero[i]; 
}


printf ("\nA media aritmetica dos numeros:\n " );
printf (" %d ", calculo/i );

getch();	

return (0);
}
