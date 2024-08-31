#include <stdio.h>
#include <stdlib.h>

main(){
    int *pti;
    int i = 10;
    
    pti = &i;

    printf("Conteúdo apontado por PTI: %d", *pti);

    *pti = 12; // Novo conteúdo

    printf("\nConteúdo apontado por PTI: %d", *pti);
    printf("\nConteúdo de pti: %d", pti);
    printf("\nConteúdo de i: %d", i);
    printf("\nEndereço de i: %d", &i);
}