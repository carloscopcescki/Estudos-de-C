#include <stdio.h>
#include <stdlib.h>

/* Definindo o nó da lista encadeada */
struct lista{
    int info;
    struct lista * proximo;
};
typedef struct lista Lista; // Define um apelido para struct lista como Lista

/* Retorna uma lista vazia */
Lista * listaVazia() {
    return NULL;
}

/* Função para inserção no início */
Lista* insereInicio(Lista* listaInteiros, int valor) {
    Lista* novoElemento = (Lista*) malloc(sizeof(Lista));
    novoElemento->info = valor;
    novoElemento->proximo = listaInteiros;
    return novoElemento;
}

/* Função para remover itens da lista */
Lista* remover(Lista* listaInteiros, int valor){
    Lista* anterior = NULL;             // Ponteiro para percorrer valor anterior
    Lista* ponteiro = listaInteiros;    // Ponteiro para percorrer a lista

    while (ponteiro != NULL && ponteiro->info != valor){
        anterior = ponteiro;
        ponteiro = ponteiro->proximo;
    }
    if (ponteiro==NULL)
        return listaInteiros;
    
    if (anterior==NULL){
        listaInteiros = ponteiro->proximo;
    }
    else{
        anterior->proximo = ponteiro->proximo;
    }
    free(ponteiro);
    return listaInteiros;
}

/* Função para imprimir a lista */
void imprimirLista(Lista * listaInteiros) {
    Lista * p;
    p = listaInteiros;
    while(p != NULL){
        printf("%d ", p->info);
        p = p -> proximo;
    }
}

int main(){
    Lista* listaEncadeada; // Declarar uma lista não inicializada
    listaEncadeada = listaVazia(); // Inicializa a lista como vazia
    listaEncadeada = insereInicio(listaEncadeada, 10);
    listaEncadeada = insereInicio(listaEncadeada, 25);
    listaEncadeada = insereInicio(listaEncadeada, 45);

    // Inserção no início
    printf("Lista encadeada: ");
    imprimirLista(listaEncadeada);

    printf("\nLista com valor removido: ");
    listaEncadeada = remover(listaEncadeada, 25);
    imprimirLista(listaEncadeada);

    return 0;
}