#include <stdio.h>

int main (void ){
	
	float salario;
	float reajuste; 
	
	printf("Insira o  seu salario: \n");
	scanf ("%f", &salario);
	
	reajuste  = salario * 0.250;
	
	salario = reajuste + salario;
	
	printf("O seu novo salario e de: %.2f reais", salario);
	
	
	
	return (0);
}
