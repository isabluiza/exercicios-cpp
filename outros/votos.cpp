/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos.
Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/

#include <stdio.h>

int main(){
	
  float total, branco, nulo, valido;

  printf("Digite a quantidade de votos em branco:\n");
  scanf("%f", &branco);

  printf("Digite a quantidade de votos nulos:\n");
  scanf("%f", &nulo);

  printf("Digite a quantidade de votos validos:\n");
  scanf("%f", &valido);
  
  total = branco+nulo+valido;

  printf("Percentual de votos em branco: %.2f\n", (100*branco)/total);
  printf("Percentual de votos nulos: %.2f\n", (100*nulo)/total);
  printf("Percentual de votos validos: %.2f\n", (100*valido)/total);

  return 0;
}
