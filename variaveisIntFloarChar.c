#include<stdio.h>
int main (void){
	char letra; //variável do tipo char, contém caractéries 
	int x; // variável para número inteiro 
	float salario;  // variável do tipo float (real) contém casas decimais
	
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	printf("letra = %c \n", letra);
	printf("x = %d \n",x);
	printf("salario = %.2f \n", salario); //.2F mostra a quantidade de caractére que quer mostrar após a virgula
	return 0; 
}
