#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, *px = &x;

    printf("O valor apontado por px: %d", *px);
    printf("\nO valor apontado por px--: %d", *px-1);
}