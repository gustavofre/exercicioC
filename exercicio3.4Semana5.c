#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i; 
int maior; 
int posicao;


int main (void){

system ("cls");
for ( i=0 ; i<10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );
	
}


printf ("\nO maior numero digitado e: \n " );
for ( i = 0 ; i < 10 ; i++){
	if(numero[i]>maior){
		maior = numero[i];
		posicao = i+1;	
	} 	
}

printf ("O maior numero e %d, e sua posicao no vetor e: %d", maior, posicao);

getch();	

return (0);
}
