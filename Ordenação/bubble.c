// Algoritmo bubble sort (Ordenação Simples)

#include <stdio.h>
#include <stdlib.h>

// Função para ordenar (Bubble Sort)
void bubble(int arr[], int n){
    // Percorre o array
    for(int i = 0; i < n - 1; i++){
        // Percorre cada elemento do array
        for(int j = 0; j < n - 1; j++){
            /* Verifica se o elemento atual é maior que o próximo elemento, caso seja, o atual recebe o próximo elemento
            
            Exemplo: Atual = 9, próximo = 5
            Bubble Sort: Criamos variável chamada "Maior", recebe o valor atual (neste caso, 9)
            Atual recebe o valor do próximo elemento (neste caso, 5) 
            Próximo elemento recebe o valor armazenado na variável "Maior" (neste caso, 9)
            
            Ordenando de maneira crescente*/ 

            if(arr[j] > arr[j + 1]){
                int maior = arr[j]; // "Maior" recebe valor do elemento atual
                arr[j] = arr[j + 1]; // Elemento atual recebe valor do elemento seguinte
                arr[j + 1] = maior; // Elemento seguinte recebe valor de "Maior"
            }
        }
    }
}

// Função principal
int main(){
    int numeros[] = {4, 2, 9, 6, 7, 10}; // Array números (desordenados)
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Calcula o tamanho do array

    // Loop para exibir os valores desordenados
    printf("Números fora de ordem: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }

    // Função bubble sort (realiza a ordenação dos números dentro do nosso array)
    bubble(numeros, tamanho);

    // Loop para exibir os valores ordenados
    printf("\n\nNúmeros ordenados: ");
    for(int i = 0;i < tamanho; i++){
        printf("%d ",numeros[i]);
    }
}

