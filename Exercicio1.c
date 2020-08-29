#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	char c1, c2, c3, c4;
	char letra;
	
	printf("Digite a sua senha: ");
	c1 = getch();
	printf("*");
	c2 = getch();
	printf("*");
	c3 = getch("*");
	printf("*");
	c4 = getch();
	printf("*");
	
	if (c1 == '1' && c2 == '3' && c3 == '1' && c4 == '0' ){
		printf("\n\n===================\n");
		printf("a = saldo\n");
		printf("b = deposito\n");
		printf("c = pagamentos\n");
		printf("d = transferencia\n");
		printf("e = sair\n\n");
		
		fflush(stdin);
		
		letra = getch();
		
		switch(letra){
			case 'a': printf("Operacao: saldo");
			break;
			
			case 'b' : printf("Operacao: deposito");
			break; 
			
			case 'c' : printf("Operacao: pagamentos");
			break;
			
			case 'd' : printf("Operacao: transferencia");
			break;
			
			case 'e' : printf ("Encerrando operacoes\n");
			exit(0);
			break;
			
			default : printf("Opcao invalida!") ;
			break;
			
		}
		
	}
	
	return(0);
	
	
	
	
}
