#include<stdio.h>
#include<stdlib.h>

int main (void) {
	float nota1, nota2, media;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf ("%f", &nota2);
	
	media = (nota1 + nota2 ) / 2;
	
	//.2f para mostrar  duas casas decimais
	printf("Media do aluno = %.2f\n", media);
	
	system("pause"); //pausa da tela somente para windowns
	
	return 0;
}
