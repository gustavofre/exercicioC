#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

// Ler nome, endereço, telefone e imprimir
 int main 	(void){
 	char nome [60];
 	char endereco [100];
 	char telefone [10];
 	
 	
 	printf("Digite o seu nome:\n");
 	scanf ("%s", &nome );
 	
 	printf ("Digite o seu endereco: \n");
 	scanf ("%s", &endereco);
 	
 	printf ("Digite o seu telefone: \n");
 	scanf ("%s", &telefone);
 	
 	printf("O seu nome e: %s mora na rua %s, e seu telefone é: %s", nome, endereco, telefone);
 	
 	return (0);
 		
 }
