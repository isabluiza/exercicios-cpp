#include <stdio.h>

int main(void) {

	int matriz[2][3];
	
	int linha, coluna;
	
		for (linha=0; linha < 1; linha++) {
			
			for (coluna=0; coluna < 3; coluna++){
				
				printf("Digite os valores:");
				scanf("%d", &matriz[linha][coluna]);
				
			}
		}
		
		do {
				
			for (coluna=0; coluna < 3; coluna++){
				
				matriz[1][coluna] * 2;
				printf("\nA multiplicacao e %d", matriz[coluna]);
		
			}
			
		} while (linha=2);
		
return 0;
}

