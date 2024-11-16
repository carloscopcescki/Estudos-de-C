#include <stdio.h>
#include <stdlib.h>

// Estrutura da árvore
typedef struct no{
    int dado;
    struct no * direita;
    struct no * esquerda;
} ArvBin;


// Função inserir elemento (caso a árvore não exista, cria a árvore e inicializa alocação de memória)
ArvBin * inserir(ArvBin * raiz, int valor){
    if (raiz == NULL){
        ArvBin * aux = malloc(sizeof(ArvBin));
        aux -> dado = valor;
        aux -> esquerda = NULL;
        aux -> direita = NULL;
        return aux;
    }else{ // Caso a árvore exista, verifica se o elemento é maior (direita) ou menor (esquerda)
        if(valor < raiz -> dado){
            raiz -> esquerda = inserir(raiz -> esquerda, valor);
        }else{
            raiz -> direita = inserir(raiz -> direita, valor);
        }
        return raiz;
    }
}

// Pré-Ordem (raiz, esquerda, direita)
void pre_ordem(ArvBin * raiz){
    if(raiz){
        printf("%d ", raiz -> dado);
        pre_ordem(raiz -> esquerda);
        pre_ordem(raiz -> direita);
    }
}

// In-Ordem (esquerda, raiz, direita)
void in_ordem(ArvBin * raiz){
    if(raiz){
        in_ordem(raiz -> esquerda);
        printf("%d ", raiz -> dado);
        in_ordem(raiz -> direita);
    }
}

// Pós-Ordem (esquerda, direita, raiz)
void pos_ordem(ArvBin * raiz){
    if(raiz){
        pos_ordem(raiz -> esquerda);
        pos_ordem(raiz -> direita);
        printf("%d ", raiz -> dado);
    }
}

//Função main
int main(){
    
    // Inicializa e cria a árvore
    ArvBin * raiz = NULL;
    
    // Inserir valores da árvore binária
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    // Realizando a busca em profundidade
    printf("Pre-Ordem: ");
    pre_ordem(raiz);
    printf("\n");
    
    printf("In-Ordem: ");
    in_ordem(raiz);
    printf("\n");

    printf("Pos-Ordem: ");
    pos_ordem(raiz);
    printf("\n");
    
    return 0;
}
