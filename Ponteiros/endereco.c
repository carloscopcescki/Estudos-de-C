#include <stdio.h>
#include <stdlib.h>

main(){
    int i = 10, *pti = &i;

    printf("\nConteúdo apontado por PTI: %d", *pti);
    printf("\nEndereço de pti: %d", pti);
    printf("\nConteúdo de i: %d", i);
    printf("\nEndereço de i: %d", &i);
}