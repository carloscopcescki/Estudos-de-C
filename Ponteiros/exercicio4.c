#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 5, * px = &x;
    printf("Valor apontado por px: %d", *px);
    printf("\nDigite o novo valor de px: ");
    scanf("%d", px);
    printf("\nNovo valor apontado por px: %d", *px);
}