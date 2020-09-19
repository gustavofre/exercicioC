#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i; 
int calculo[10];

int main (void){

//system ("cls");
for ( i=0 ; i<10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );	
}


printf ("\nO quadrado dos numeros digitados:\n " );
for ( i=0 ; i<10 ; i++ ){
	calculo[i] = numero[i] * numero[i]; 
	printf (" %d ", calculo[i] );
}

getch();	

return (0);
}
