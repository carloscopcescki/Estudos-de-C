#include <stdio.h>
#include <stdlib.h>

int main(){
    int * px = 10;
    int x = 10;

    px = &x;

    printf("Valor apontado por px (antigo): %d", *px);
    printf("\nDigite um novo valor de px: ");
    scanf("%d", *px);
    printf("\nNovo valor apontado por px: %d", *px);

}