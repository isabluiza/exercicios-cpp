/*Elaborar um programa que efetue a leitura de um número inteiro e apresente uma mensagem informando se ele é par ou ímpar.*/

#include <stdio.h>

int main() {
   
    int num;
    
    printf("Digite um numero inteiro\n");
    scanf("%i", &num);
    
    if(num%2==0){
        printf("Par");
    }

        else{
            printf("Impar");
        }

    return 0;
}
