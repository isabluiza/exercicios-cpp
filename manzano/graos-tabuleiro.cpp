/*Elaborar um programa que efetue o cálculo e no final apresente o somatório do número de grãos de trigo que se pode obter num tabuleiro de xadrez,
obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja,
no primeiro quadro coloca-se 1 grão, no segundo quadro colocam-se 2 grãos (neste momento têm-se 3 grãos), no terceiro quadro colocam-se 4 grãos
(tendo neste momento 7 grãos), no quarto colocam-se 8 grãos (tendo-se então 15 grãos) até atingir o sexagésimo quarto (64o ) quadro.
Utilize variáveis do tipo real como acumuladores.*/

#include <stdio.h>

int main(){
    
    unsigned long long int grao=1;      //maximizar valor da variave tipo int permitindo ocupar mais memoria
    int cont;
      
    for(cont=1;cont<=64;cont++){
    	printf("%i° Quadrado tem %llu de grãos\n",cont,grao);
    	grao = grao+grao;
    	
    }
return (0);
}

