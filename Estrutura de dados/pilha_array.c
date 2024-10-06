#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct pilha {
    int dados[N];
    int topo; 
} PILHA;

void inicializa(PILHA * p){
    int i;
    for(i = 0; i < N; i++){
        p->dados[i] = 0;
    }
    p->topo = 0;
}

void empilha(int dado, PILHA * p){
    if(p->topo == N){
        printf("Pilha cheia!\n");
        return;
    } else {
        p->dados[p->topo] = dado;
        p->topo++;
        return;
    }
}

int desempilha(PILHA * p){
    if(p->topo == 0){
        printf("Pilha vazia!\n");
        return -1;
    } else {
        p->topo--;
        return p->dados[p->topo];
    }
}

void imprimePilha(PILHA * p){
    int i;
    printf("Pilha: ");
    for(i = 0; i < p->topo; i++){
        printf("%d ", p->dados[i]);
    }
    printf("\n");
}

int main(){
    PILHA p;
    inicializa(&p);
    empilha(10, &p);
    empilha(20, &p);
    empilha(30, &p);
    
    imprimePilha(&p);

    desempilha(&p);
    imprimePilha(&p);
}
