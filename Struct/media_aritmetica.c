#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarar variáveis para receber notas da P1, P2 e atividade
    float notaProva_1, notaProva_2, notaAtividade;
    
    // Receber os valores digitados pelo usuário
    printf("Digite a nota da P1: ");
    scanf("%f", &notaProva_1);
    printf("\nDigite a nota da P2: ");
    scanf("%f", &notaProva_2);
    printf("\nDigite a nota da atividade: ");
    scanf("%f", &notaAtividade);
    
    float mediaProva = (((notaProva_1 + notaProva_2) / 2) * 8);  // Variável para receber a média de provas
    float mediaFinal = ((mediaProva + (notaAtividade * 2)) / 10); // Variável para receber a média final
    
    printf("A média final foi: %.2f", mediaFinal);
    
    return 0;
}