#include<stdio.h>

int main (void) {
	
	float nota1, nota2, media;
	
	printf("Digite a nota do aluno: \n");
	scanf("%f", &nota1);
	
	printf("Digite a nota do aluno \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2 ) /2;
	
	if(media >=7){
		printf("\naluno APROVADO!!!\n\n");
	} else { //nega a condição if 
		printf("\naluno REPROVADO\n\n");
	}

	return (0);
}
