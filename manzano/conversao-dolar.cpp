/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar.
O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário,
para que seja apresentado o valor em moeda brasileira. (MANZANO, p. 26)*/

#include <stdio.h>

int main(){
    
    float real, dolar;
 
    printf ("Digite o valor da cotacao do dolar:\n");   
    scanf ("%f", &dolar); 
       
    printf ("Digite o valor em real que deseja converter:\n");   
    scanf ("%f", &real); 

    printf ("O valor convertido e de: %.2f dolares", dolar*real);

    return 0;
}
