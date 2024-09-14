#include <stdio.h>
#include <stdlib.h>

struct no {
    int info;
    struct no *proximo;
};
typedef struct no No;

struct fila {
    No *inicio;
    No *fim;
};
typedef struct fila Fila;

// Função para inicializar a fila vazia
Fila* filaVazia() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

// Função para enfileirar (inserir no fim)
void enfileirar(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->proximo = NULL;
    if (f->fim != NULL) {
        f->fim->proximo = novo;  // O atual último aponta para o novo nó
    }
    f->fim = novo;  // O novo nó se torna o fim da fila
    if (f->inicio == NULL) {
        f->inicio = novo;  // Se a fila estava vazia, o início também é o novo nó
    }
}

// Função para desenfileirar (remover do início)
int desenfileirar(Fila *f, int *valor) {
    if (f->inicio == NULL) {  // Fila vazia
        printf("Fila vazia!\n");
        return 0;
    }
    No *temp = f->inicio;
    *valor = temp->info;
    f->inicio = temp->proximo;
    if (f->inicio == NULL) {  // Se a fila ficou vazia após remover
        f->fim = NULL;
    }
    free(temp);
    return 1;
}

// Função para imprimir os elementos da fila
void imprimirFila(Fila *f) {
    No *p = f->inicio;
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->proximo;
    }
    printf("\n");
}

int main() {
    Fila *fila = filaVazia();

    // Enfileirar valores
    enfileirar(fila, 10);
    enfileirar(fila, 20);
    enfileirar(fila, 30);

    printf("Fila: ");
    imprimirFila(fila);

    // Desenfileirar
    int valor;
    desenfileirar(fila, &valor);
    printf("Valor desenfileirado: %d\n", valor);
    printf("Fila após desenfileirar: ");
    imprimirFila(fila);

    return 0;
}
