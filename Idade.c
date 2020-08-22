#include <stdio.h>

int main (void){
	
	int anoNascimento;
	int anoAtual;
	int idadePessoa;
	int idadeMeses;
	int idadeDias;
	int idadeSemana;
	
	
	printf("Qual o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("Qual o ano atual: ");
	scanf("%d", &anoAtual);
	
	idadePessoa = anoAtual - anoNascimento;
	printf("A sua idade e: %d \n", idadePessoa);
	
	idadeMeses = idadePessoa * 12;
	printf("A sua idade em meses e: %d \n",idadeMeses);
	
	idadeDias = idadePessoa * 365;
	printf("A sua idade em dias e: %d \n", idadeDias);
	
	idadeSemana = idadePessoa * 52;
	printf("A sua idade em semanas e: %d", idadeSemana);
	

	return (0);
	
}
