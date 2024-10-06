#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct fila {
    int dados[N];
    int fim; 
}FILA;

void inicializa(FILA * p){
    int i;
    for(i = 0; i < N; i++){
        p->dados[i] = 0;
    }
    p->fim = 0;
}

void enfileira(int dado, FILA * p){
    if(p->fim == N){
        printf("Fila cheia!\n");
        return;
    } else {
        p->dados[p->fim] = dado;
        p->fim++;
    }
}

int desenfileira(FILA * p){
    int dado, i;
    if(p->fim == 0){
        printf("Fila vazia!\n");
        return;
    } else {
        dado = p->dados[0];
        for(i=0; i< p->fim ;i++){
            p->dados[i] = p->dados[i+1];
        }
        p->fim--;
        return dado;
    }
}

void imprimeFila(FILA * p){
    int i;
    printf("Imprimindo a fila: \n");
    for(i=0; i<p->fim ;i++){
        printf("%d ", p->dados[i]);
    }
}

int main(){
    FILA f;
    inicializa(&f);
    enfileira(10, &f);
    enfileira(20, &f);
    enfileira(30, &f);
    imprimeFila(&f);
}