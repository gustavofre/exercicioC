#include<stdio.h>

int main (void){
	char nome [21]; //colocamos a quantidade, o char sem declarar array pega apenas o primeiro valor 
	//colocamos um n�mero a mais, pois a linguagem C pega um valor de array 
	
	printf("Digite o seu nome: ");
	// scanf("%s", nome); // Utilizamos o %s para mostrar a string toda 
	
	
	fgets (nome,21,stdin); // leitura da string 
	//stdin informa que a leitura � do teclado
	
	printf("O seu nome �: %s",nome);
	return 0;
}
