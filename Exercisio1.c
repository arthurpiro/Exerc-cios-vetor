#include <stdio.h>

int main() {
    
    int numero[5];
    int contador;

   for(contador = 0; contador < 5; contador++) {
        printf("Escreva um numero:\n", contador + 1);
       scanf("%d", &numero[contador]);
   }
     for(contador=0; contador<5; contador++){
        printf("%d", numero[contador]);
     }

    printf("\n");
    
    for(contador=4; contador>=0; contador--){
        printf("%d", numero[contador]);
     }
    return 0;
}
