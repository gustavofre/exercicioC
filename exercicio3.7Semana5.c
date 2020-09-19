#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i, j; 
int menor; 
int posicao;
int naoRepete;


int main (void){

system ("cls");
for ( i=0 ; i < 10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );
	
}

naoRepete = numero [0]; 
for ( i= 0; i <= 10 ; i++){
	for( j = i + 1; j <=9; j++){
		if(numero[i] != numero[j]){
		naoRepete = numero[j];
		printf ("Os numeros que nao se repetem sao: %d\n",naoRepete);
		
		}break; 		
	}	
		
}

	




getch();	

return (0);
}
