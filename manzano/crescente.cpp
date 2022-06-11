/*Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente.*/

#include <stdio.h>

int main() {

    float A, B, C;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &A);
    printf("Digite o segundo numero: \n");
    scanf("%f", &B);
    printf("Digite o terceiro numero: \n");
    scanf("%f", &C);

        if (A < B)
          if (B < C)
            printf("\n\n%f < %f < %f\n", A, B, C);
          else
            if (A < C)
              printf("\n\n%f < %f < %f\n", A, C, B);
            else
              printf("\n\n%f < %f < %f\n", C, A, B);
        else
          if (B < C)
            if (A < C)
              printf("\n\n%f < %f < %f\n", B, A, C);
            else
              printf("\n\n%f < %f < %f\n", B, C, A);
          else
            printf("\n\n%f < %f < %f\n", C, B, A);

    return(0);

}
