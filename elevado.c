#include <stdio.h>
#include <math.h>

int main (void){

	float base;
	float expoente; 
	float resultado;
	
	printf("Digite o valor da base: \n");
	scanf("%f", &base);
	
	printf("Digite o valor expoente \n");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("O resultado de %.1f elevado a %.1f e: %.1f",base, expoente, resultado);	
	
	
	return (0);
}
