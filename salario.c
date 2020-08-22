#include <stdio.h>

int main (void){
	
	float salarioInss;
	float salarioIr;
	float salarioBruto;
	float salarioLiquido;
	
	
	
	printf("Digite o seu salario: ");
	scanf ("%f", &salarioBruto);
	
	//valor do inss
	salarioInss = salarioBruto * 0.085;
	 
	salarioIr = (salarioBruto - salarioInss) * 0.275;
	
	salarioLiquido = salarioBruto  - (salarioInss + salarioIr);
	
	printf("Seu salario liquido e de: %.2f \n", salarioLiquido);
	printf ("O valor total da previdencia e de: %.2f \n", salarioInss);
	printf ("O valor total do imposto de renda e de: %.2f", salarioIr);
	
	return (0);
	
}
