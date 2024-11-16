#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                int maior = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = maior;
            }
        }
    }
}

int main(){
    int numeros[] = {4, 2, 9, 6, 7, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Números fora de ordem: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }

    bubble(numeros, tamanho);

    printf("\n\nNúmeros ordenados: ");
    for(int i = 0;i < tamanho; i++){
        printf("%d ",numeros[i]);
    }
}

