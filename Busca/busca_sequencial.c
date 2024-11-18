#include <stdio.h>
#include <stdlib.h>

int buscaSeq(int v[], int tamanho, int chave){
    for(int i = 0; i < tamanho; i++){
        if(v[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;

    printf("Digite o elemento que você gostaria de buscar: ");
    scanf("%d", &chave);

    int resultado = buscaSeq(vetor, tamanho, chave);

    if(resultado != -1){
        printf("Elemento %d foi encontrado no índice %d.\n", chave, resultado);
    }else{
        printf("Elemento %d não foi encontrado no vetor.\n", chave);
    }

    return 0;
}