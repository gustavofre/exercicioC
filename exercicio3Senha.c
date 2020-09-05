#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de variáveis globais 

char s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
int tentativas = 0; 

int main (void){
	setlocale(LC_ALL,"");
	
	do {
		printf("Senha: ");
		s1 = getch(); printf("*");
		s2 = getch(); printf("*");
		s3 = getch(); printf("*");
		s4 = getch(); printf("*");
		s5 = getch(); printf("*");
		s6 = getch(); printf("*");
		s7 = getch(); printf("*");
		s8 = getch(); printf("*");
		s9 = getch(); printf("*");
		s10 = getch(); printf("*");

		tentativas = tentativas + 1;
	
		if (s1 == 'i' && s2 == 'r' && s3 == 'o' && s4 == 'n' && s5 == 'm' && s6 == 'a' && s7 == 'i' && s8 == 'd' && s9 == 'e' && s10 == 'm'){
			printf("\n\nAcesso VIP!\n\n");
		} 
			else{
			printf("\n\nBARRADO NA ENTRADA!!\n\n");
		} 
		
	}
	
		while (!(s1 == 'i' && s2 == 'r' && s3 == 'o' && s4 == 'n' && s5 == 'm' && s6 == 'a' && s7 == 'i' && s8 == 'd' && s9 == 'e' && s10 == 'm') && (tentativas < 3));


	return(0);
	
}	




