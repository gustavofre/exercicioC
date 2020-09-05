#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "");
	int dez = 10; 
	int i = 0;
//	int resultado; 
	
	do {
		printf ("%i * %i = %i\n\n", dez, i, dez*i);
		i++;
		//resultado = dez * i;					
	} while (i <= 10);
	
	return (0);
}

