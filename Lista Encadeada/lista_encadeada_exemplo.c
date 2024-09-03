#include <stdio.h>
#include <stdlib.h>

struct elemento { 
    int info; 
    struct elemento *proximo; 
};

typedef struct elemento Elemento;

// Criação da lista vazia
Elemento *criaListaVazia() {
    return NULL;
}

//Função para inserir valor na lista
Elemento * insereInicio (Elemento * listaInteiros, int valor) {
    Elemento * novo = (Elemento *)malloc(sizeof(Elemento));
    novo -> info = valor;
    novo -> proximo = listaInteiros;
    return novo;
}

//Função para inserir no final
Elemento * insereFinal (Elemento * listaInteiros, int valor) {
    Elemento * novo = (Elemento *)malloc(sizeof(Elemento));
    novo -> info = valor;
    novo -> proximo = NULL;
    
    if(listaInteiros == NULL){
        return novo;
    } else {
        Elemento *p = listaInteiros;
        while(p->proximo != NULL){
            p = p->proximo;
        }
        p->proximo = novo;
    }
    return novo;
}

// Função para imprimir a lista
void imprimeListaInteiros(Elemento * listaInteiros) { 
    printf("\n\nLista: "); 
    Elemento * p;
    p = listaInteiros;
    while (p != NULL){
        printf(" %d", p->info);
        p = p->proximo;
    }
}

// Função main para executar todo o programa
int main() { 
    printf("\n*** Inicio do Programa *** \n"); 
    Elemento * ListaInteiros = (Elemento *) malloc(sizeof(Elemento));
    ListaInteiros = criaListaVazia(); 
    
    ListaInteiros = insereInicio(ListaInteiros, 10);
    ListaInteiros = insereInicio(ListaInteiros, 20);
    
    // Retorna no final
    ListaInteiros = insereFinal(ListaInteiros, 45);
    ListaInteiros = insereFinal(ListaInteiros, 22);
    
    imprimeListaInteiros(ListaInteiros); 

    printf("\n\n*** Fim do Programa *** \n");
    
    return 0; 
}