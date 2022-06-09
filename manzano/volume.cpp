#include <stdio.h>

int main(){
    
    float vol, com, lar, alt;
 
    printf ("Digite o comprimento:\n");   
    scanf ("%f", &com); 
       
    printf ("Digite a largura:\n");   
    scanf ("%f", &lar); 
      
    printf ("Digite a altura:\n");   
    scanf ("%f", &alt);
    
    vol = com * lar * alt;   

    printf ("O volume da caixa e: %.2f", vol);

    return 0;
}
