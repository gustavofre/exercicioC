#include<stdio.h>
int main (void){
	char letra; //vari�vel do tipo char, cont�m caract�ries 
	int x; // vari�vel para n�mero inteiro 
	float salario;  // vari�vel do tipo float (real) cont�m casas decimais
	
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	printf("letra = %c \n", letra);
	printf("x = %d \n",x);
	printf("salario = %.2f \n", salario); //.2F mostra a quantidade de caract�re que quer mostrar ap�s a virgula
	return 0; 
}
