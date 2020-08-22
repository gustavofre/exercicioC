#include <stdio.h>

int main (void) {
	
	float celcius;
	float farenheit;
	
	printf ("Digite um numero em grau Celcius:");
	scanf ("%f", &celcius);
	
	farenheit = (celcius * 1.8)+ 32;
	printf ("A temperatura equivalente a Farenheit e: %.2f", farenheit);
	 
}
