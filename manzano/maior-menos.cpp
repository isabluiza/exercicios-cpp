/*Efetuar a leitura de dois números inteiros e identificar o maior e o menor valores.*/

#include <stdio.h>

int main() {
    
    float numero, maior, menor;
    int cont = 1;
    
        while (cont <= 2) {
            
        printf("Digite um número real:\n");
        
        scanf("%f", &numero);
           
            if (cont == 1) {
                maior = numero;
                menor = maior;
            }
                else if (numero > maior) {
                    maior = numero;
                }
                    else if (numero < menor) {
                        menor = numero;
                    }
        
            cont++;
        }
        
    printf("Menor numero: %.2f\nMaior numero: %.2f", menor, maior);
    
    return(0);
}
