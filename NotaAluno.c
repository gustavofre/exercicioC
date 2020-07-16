#include<stdio.h>

int main (void){
	char conceito; //variável tipo char armazena o único caractére na memória 
	float nota; 
	int matricula;
	
	
	printf("informe o conceito do aluno: \n");
	scanf ("%c",&conceito);
	
	printf ("Informe a nota do aluno: \n");
	scanf ("%f", &nota);
	
	printf ("Informe a matrícula do aluno: \n");
	scanf ("%d", &matricula);
	
	printf ("\nConceito: %c \n", conceito);
	printf ("Nota: %.1f \n", nota);
	printf ("Matricula: %d \n", matricula);
	
	
	return (0);
}
