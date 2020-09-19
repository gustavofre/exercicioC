#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i; 
int menor; 
int posicao;


int main (void){

system ("cls");
for ( i=0 ; i < 10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );
	
}



printf ("\nO menor numero digitado e: \n " );
menor = numero[0];
for ( i= 0; i <= 10 ; i++){
	if(numero[i] < menor){
		menor = numero[i];
		posicao = i+1;
	} 	
}

printf ("O menor numero e %d, e sua posicao no vetor e: %d", menor, posicao);



getch();	

return (0);
}
