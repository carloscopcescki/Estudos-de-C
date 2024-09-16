#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    float nota1, nota2, notaAtividade, mediaFinal;
};

int main(){
    struct aluno turma[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite sua nota da P1: ");
        scanf('%f', turma[i].nota1);
    }
}

