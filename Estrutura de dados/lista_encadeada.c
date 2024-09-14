#include <stdio.h>
#include <stdlib.h>

struct no{
    int info;
    struct no * proximo;
};
typedef struct no No;

No * listaVazia(){
    return NULL;
}

No * imprimeInicio(No * lista, int valor){
    No * novo = (No*) malloc(sizeof(No));
    novo -> info = valor;
    novo -> proximo = lista;
    return novo;
}

No * imprimeFinal(No * lista, int valor){
    No * novo = (No*) malloc(sizeof(No));
    novo -> info = valor;
    novo -> proximo = NULL;

    if(lista == NULL){
        return novo;
    } else{
        No * p = lista;
        while(p -> proximo != NULL){
            p = p->proximo;
        }
        p = p->proximo = novo;
        return lista;   
    }
}

No * remover(No * lista, int valor){
    No * ant = NULL;
    No * p = lista;
    while (p != NULL && p->info != valor){
        ant = p;
        p = p->proximo;
    }
    if (p==NULL){
        return lista;
    }

    if (p==lista){
        lista = p->proximo; // Remove no inicio
    }
    else{
        ant->proximo = p->proximo;  // Remove no final
    }

    free(p);
    return lista;
}

void imprimirLista(No * lista){
    No * p;
    p = lista;
    while(p != NULL){
        printf("%d ", p->info);
        p = p -> proximo;
    }
}

int main(){
    No* listaEncadeada;
    listaEncadeada = listaVazia();
    listaEncadeada = imprimeInicio(listaEncadeada, 1);
    listaEncadeada = imprimeFinal(listaEncadeada, 4);
    listaEncadeada = imprimeInicio(listaEncadeada, 3);

    printf("\nLista Encadeada: ");
    imprimirLista(listaEncadeada);

    return 0;
}