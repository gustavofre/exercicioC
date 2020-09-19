#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i; 

int main (void){

system ("cls");
for ( i=0 ; i<10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );	
}


printf ("\nOs numeros em ordem inversa sao: \n " );
for ( i = 9 ; i >= 0 ; i--){
	printf (" %d ", numero[i]);
}

getch();	

return (0);
}
