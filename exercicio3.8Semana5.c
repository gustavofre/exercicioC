#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero[10];
int i, j; 
int menor; 
int posicao;
int frequencia;


int main (void){

system ("cls");
for ( i=0 ; i < 10 ; i++ ){
	printf ("\nDigite o %d numero: " , i+1 );
	fflush (stdin);
	scanf ("%d" , &numero[i] );
	system ("cls" );
	
}

//naoRepete = numero [0]; 

for ( i= 0; i <= 10 ; i++){
	for( j = i + 1; j <=9; j++){
		if (numero[i] == numero [j]){
			frequencia++;
			frequencia[0];
		}
	} 
	printf("A quantidade de vezes que o numero se repete e %d", frequencia);			
		
}

	




getch();	

return (0);
}
