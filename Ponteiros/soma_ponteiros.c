#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 10, *px = &x;
    printf("Endereço de py: %u", px);
    printf("\nEndereço de py ++: %u", px+1);
}