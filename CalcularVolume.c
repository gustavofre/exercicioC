#include <stdio.h>

int main (void) {
	
	int raio;
	int altura;
	float pi = 3.14159;
	float volume; 
	
	printf ("Insira o raio da lata: ");
	scanf ("%d", &raio);
	
	printf ("Insira a altrua da lata : ");
	scanf ("%d", &altura);
	
	volume = pi * (raio * raio) * altura;
	printf("O volume e %.4f", volume);
	 
	return (0);
	
}

