/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e
o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

#include <stdio.h>

int main(){
	
	float salario, reajuste;
	
	printf("Digite o salario mensal atual:\n");
	scanf("%f", &salario);
	
	printf("\nDigite o percentual de reajuste:\n");
	scanf("%f", &reajuste);
	
	printf("\n\nEsse e o salario com o reajuste: %.2f", salario + (salario * (reajuste/100)));
	
	return 0;
}
