/*Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que
o valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas variáveis.*/

#include <stdio.h>

int main(){
	
	int a=10, b=20, step;
	
	printf("Antes da troca --> A: %d || B: %d\n\n", a, b);
	
	step = a;
	a = b;
	b = step;
	
	printf("Depois da troca --> A: %d || B: %d", a, b);
	
	return 0;
}

