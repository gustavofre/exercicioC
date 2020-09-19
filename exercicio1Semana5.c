#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int vet[10];
int i; 

int main (void){

//system ("cls");
for ( i=0 ; i<10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &vet[i] );
	system ("cls" );
}

printf ("\nNumeros digitados:\n " );
for ( i=0 ; i<10 ; i++ )
	printf (" %d " , vet[i] );

getch();

return (0);
}
