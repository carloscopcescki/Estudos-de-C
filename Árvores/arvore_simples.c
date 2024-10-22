#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no * direita;
    struct no * esquerda;
} ArvBin;

ArvBin * inserir(ArvBin * raiz, int valor){
    if (raiz == NULL){
        ArvBin * aux = malloc(sizeof(ArvBin));
        aux -> dado = valor;
        aux -> esquerda = NULL;
        aux -> direita = NULL;
        return aux;
    }else{
        if(valor < raiz -> dado){
            raiz -> esquerda = inserir(raiz -> esquerda, valor);
        }else{
            raiz -> direita = inserir(raiz -> direita, valor);
        }
        return raiz;
    }
}

void imprime(ArvBin * raiz){
    if(raiz){
        printf("%d ", raiz -> dado);
        imprime(raiz -> esquerda);
        imprime(raiz -> direita);
    }
}

int main(){
    ArvBin * raiz = NULL;
    
    // Inserir valores
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    imprime(raiz);
    
    return 0;
}