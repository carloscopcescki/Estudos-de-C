#include <stdio.h>
#include <stdlib.h>

struct Aluno{   // Definir struct Aluno
    char nome[50];
    float nota1;
    float nota2;
    float notaAtividade;
    float mediaProva, mediaFinal;
};

int main()
{
    struct Aluno turma[5]; // Array turma da struct Aluno
    int i;
    for(i=0;i<5;i++){    // Loop para obter a média de cada aluno
        printf("\nDigite o nome do %d° aluno: ", i + 1);
        scanf("%s", turma[i].nome); // %s = string
        printf("Digite a nota da P1: ");
        scanf("%f", &turma[i].nota1); // %f = float  
        printf("Digite a nota da P2: ");
        scanf("%f", &turma[i].nota2);
        printf("Digite a nota da atividade: ");
        scanf("%f", &turma[i].notaAtividade);
        
        turma[i].mediaProva = (turma[i].nota1 + turma[i].nota2) / 2;
        turma[i].mediaFinal = ((turma[i].mediaProva * 8) + (turma[i].notaAtividade * 2)) / 10;

        printf("\nAluno: %s - Média Final: %.2f\n", turma[i].nome, turma[i].mediaFinal);
    }
    
    return 0;
}