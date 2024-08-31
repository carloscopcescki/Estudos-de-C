#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 10, *px = &x, **ppx = &x;
    float y = 5.9, *py = &y, **ppy = &py;

    printf("Valor: %d", *&px);
}