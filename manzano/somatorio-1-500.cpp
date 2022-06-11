/*Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500.*/

#include <stdio.h>

int main() {
   
    int cont, soma=0;
   
    for(cont=0; cont<=500; cont++){
        soma = soma + cont;
    }
    
    printf("%i", soma);

    return 0;
}
