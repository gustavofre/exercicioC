#include <stdio.h>


int main (void){
	
	char sexo;
	float altura, pesoIdealMulher, pesoIdealHomem;
	
	printf("Digite a sua altura: \n");
	scanf ("%f", &altura);
		
	pesoIdealMulher = 62.1*altura - 44.7;
	pesoIdealHomem = 72.7 * altura - 58;
	
	fflush(stdin); 
	
	printf("Digite F para feminino e M para masculino\n");
	scanf("%c", &sexo);
	
	
	switch (sexo){
		
		case 'm' : case 'M' : printf ("\n O seu peso ideal e: %.2f", pesoIdealHomem);
		break;
		
		case 'f' : case 'F' : printf ("\n O seu peso ideal e: %.2f", pesoIdealMulher);
		break;
		
		default : printf ("OPCAO INVALIDA!!");
		break; 
		
		 
		
	}
	
	
	
	
	return (0); 
}
