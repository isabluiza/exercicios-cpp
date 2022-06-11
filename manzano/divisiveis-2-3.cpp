/*Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3.*/

#include <stdio.h>

int main() {

    int A, B, C, D;

    printf("Escreva quatro numeros inteiros: \n\n");
    
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    
    if ((A%2==0) || (A%3==0)) {
        printf("%i e divisivel por 2 e por 3\n\n", A);
    }
        else {
           printf("%i nao e divisivel por 2 e por 3\n\n", A); 
        }
        
    if ((B%2==0) || (B%3==0)) {
        printf("%i e divisivel por 2 e por 3\n\n", B);
    }
        else {
           printf("%i nao e divisivel por 2 e por 3\n\n", B); 
        }
        
    if ((C%2==0) || (C%3==0)) {
        printf("%i e divisivel por 2 e por 3\n\n", C);
    }
        else {
           printf("%i nao e divisivel por 2 e por 3\n\n", C); 
        }
        
    if ((D%2==0) || (D%3==0)) {
        printf("%i e divisivel por 2 e por 3\n\n", D);
    }
        else {
           printf("%i nao e divisivel por 2 e por 3\n\n", D); 
        }
 
    return(0);

}
