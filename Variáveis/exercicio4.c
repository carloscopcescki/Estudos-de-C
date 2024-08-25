#include <stdlib.h>
#include <stdio.h>

void exercicio4(){
	printf("Exercicio 4\n-------\n\n");
	float p, cm;
	printf("Digite o valor de polegada: ");
	scanf("%f", &p);
	cm = 2.54*p;				
	printf("O valor em centimetro e: %f\n", cm);
	printf("\n");
}
