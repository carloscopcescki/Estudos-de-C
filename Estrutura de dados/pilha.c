#include <stdio.h>
#include <stdlib.h>

struct no{
    int info;
    struct no * proximo;
};
typedef struct no No;

No * pilhaVazia(){
    return NULL;
}

// Função para empilhar (push)
No * empilhar(No * topo, int valor){
    No * novo = (No*) malloc(sizeof(No));
    novo -> info = valor;
    novo -> proximo = topo;
    return novo;
}

// Função para remover topo (pop)
No * remover(No * topo, int *valor){
    if (topo == NULL){
        printf("Pilha vazia!\n");
        return NULL;
    }
    No * temp = topo;
    *valor = topo->info;
    topo = topo -> proximo;
    free(temp);
    return topo;
}

// Função para imprimir os elementos da pilha
void imprimirPilha(No * topo){
    No * p = topo;
    while(p != NULL){
        printf("%d ", p->info);
        p = p -> proximo;
    }
    printf("\n");
}

int main(){
    No * pilha;
    pilha = pilhaVazia();

    // Empilhar valores
    pilha = empilhar(pilha, 10);
    pilha = empilhar(pilha, 20);
    pilha = empilhar(pilha, 30);

    printf("Pilha: ");
    imprimirPilha(pilha);

    // Desempilhar
    int valor;
    pilha = remover(pilha, &valor);
    printf("Valor retirado: %d\n", valor);
    printf("Pilha após desempilhar: ");
    imprimirPilha(pilha);

    return 0;
}