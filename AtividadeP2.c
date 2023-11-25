#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL,"portuguese");
   
    char nomes[5][50];
    int idades[5];
    float notas[5][3];
    float medias[5];
    char situacoes[5][15];
    int i,j;
    
    for ( i = 0; i < 5; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite as 3 notas do %d° aluno :\n ", i + 1);
        fflush(stdin);
        for ( j = 0; j < 3; j++) {
            printf("nota%d°:\n",j+1);
            scanf("%f", &notas[i][j]);
        }

       
        float soma = 0.0;
        for ( j = 0; j < 3; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / 3;

      
        if (medias[i] >= 7.0) {
            strcpy(situacoes[i], "Aprovado");
        } else if (medias[i] >= 5.0) {
            strcpy(situacoes[i], "Recuperacao");
        } else {
            strcpy(situacoes[i], "Reprovado");
        }
    }

   
    printf("\nDados dos alunos:\n");
    for ( i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Notas: %.2f %.2f %.2f\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Media: %.2f\n", medias[i]);
        printf("Situacao: %s\n", situacoes[i]);
    }

    return 0;
}
