/*
    Algoritmo selection sort
    Seleciona o menor elemento da sequência e coloca ele na primeira posição do vetor
    Repete todo o processo até todo array estar em sequência
*/ 

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int * v, int tamanho){
    for(int i = 0; i < tamanho - 1; i++){  // Loop que percorre o vetor (array)
        int menor = i; // Assumimos que o menor elemento está na primeira posição do nosso array
        for(int j = i + 1; j < tamanho; j++){ // Loop interno, procura o menor elemento no array
            if(v[j] < v[menor]){    // Verifica se o número da 2° posição é menor que a 1° posição
                menor = j;
            }
        }
        int aux = v[i];     // Variável auxiliar recebe n° posição inicial
        v[i] = v[menor];    // Posição inicial recebe o menor valor
        v[menor] = aux;     // Menor valor recebe o número de auxiliar (faz a troca)
    }
}

int main(){
    int numeros[] = {1, 2, 9, 3, 4, 10, 7};     // Array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);     // Calcula o tamanho do array
    int i;

    printf("Números fora de ordem: ");
    for(i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }

    selection_sort(numeros, tamanho);    // Chama a função selection sort 

    printf("\nNúmeros ordenados: ");
    for(i = 0; i < tamanho; i++){       // Loop para percorrer e exibir todo array em sequência
        printf("%d ", numeros[i]);
    }
}