// Arvore binária em linguagem C

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no * esquerda;
    struct no * direita;
}ArvBin;

ArvBin * inserir(ArvBin * raiz, int valor){
    if(raiz == NULL){
        ArvBin * aux = malloc(sizeof(ArvBin));
        aux -> valor = valor;
        aux -> esquerda = NULL;
        aux -> direita = NULL;
        return aux;
    }else{
        if(valor < raiz -> valor){
            raiz -> esquerda = inserir(raiz -> esquerda, valor);
        }else{
            raiz -> direita = inserir(raiz -> direita, valor);
        }
        return raiz;
    }
}

void pre_ordem(ArvBin * raiz){
    if(raiz){
        printf("%d ", raiz -> valor);
        pre_ordem(raiz -> esquerda);
        pre_ordem(raiz -> direita);        
    }
}

void pos_ordem(ArvBin * raiz){
    if(raiz){
        pos_ordem(raiz -> esquerda);
        pos_ordem(raiz -> direita);
        printf("%d ", raiz -> valor);        
    }
}

void in_ordem(ArvBin * raiz){
    if(raiz){
        in_ordem(raiz -> esquerda);
        printf("%d ", raiz -> valor);
        in_ordem(raiz -> direita);        
    }
}

int main(){
    ArvBin * arvore = NULL;

    //Inserir valores
    arvore = inserir(arvore, 20);
    arvore = inserir(arvore, 15);
    arvore = inserir(arvore, 25);
    arvore = inserir(arvore, 17);
    arvore = inserir(arvore, 10);
    arvore = inserir(arvore, 30);
    arvore = inserir(arvore, 22);

    printf("Pre-Ordem: ");
    pre_ordem(arvore);
    printf("\n");

    printf("Pos-Ordem: ");
    pos_ordem(arvore);
    printf("\n");

    printf("In-Ordem: ");
    in_ordem(arvore);
    printf("\n");

    return 0;
}




