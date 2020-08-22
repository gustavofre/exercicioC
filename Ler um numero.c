#include <stdio.h>

int main (void) {
	
	int numero;
	int resultado;
	
	printf("Insira um numero inteiro: ");
	scanf ("%d", &numero);
	
	resultado = 2 * (numero * numero);
	
	printf ("O dobro do numero do quadrado e: %d", resultado);
	
	return (0);
	
	
}
