#include <stdio.h>

int main(void) {

    int idade[4], indice;

    for (indice=0; indice<4; indice++) {

        printf("Digite um valor:");
        scanf("%d", &idade[indice]);
    }

    for (indice=0; indice<4; indice++) {

        printf("\nValor digitado: %d", idade[indice]);
    }

return 0;
}
