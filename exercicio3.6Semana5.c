#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i, j; 
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
for ( i= 0; i <= 10 ; i++){
	for( j = i + 1; j <=10; j++){
		if(numero[i] == numero[j]){
		printf ("O numero repetido e: %d\n",numero[j]);		
		
	}	
	}	
}





getch();	

return (0);
}
