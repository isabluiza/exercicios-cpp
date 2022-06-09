/*Escreva um algoritmo para ler um valor inteiro e escrever o seu antecessor*/

#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um numero\n");
	scanf("%d", &num);
	
	printf("\nO antecessor do seu numero e: %d\n", num-1);
	
	return 0;
}
