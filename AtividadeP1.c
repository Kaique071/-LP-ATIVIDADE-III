#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    char Nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    float Maioraltura = 0;
    int MaiorIdade = 0;
    float MaiorPeso = 0;
    float Menoraltura = 999999999;
    int MenorIdade = 999999999;
    float MenorPeso = 999999999;
    char PessoaVelha[200];
    char PessoaNova[200];
    char PessoaGorda[200];
    char PessoaMagra[200];
    char PessoaAlta[200];
    char PessoaBaixa[200];

    for (i = 0; i < 5; i++)
    {
        printf("%d Pessoa\n", i + 1);
        printf("\n");
        printf("Digite seu nome: ");
        gets(Nome[i]);

        fflush(stdin);

        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] > MaiorIdade)
        {
            MaiorIdade = idade[i];
            strcpy(PessoaVelha, Nome[i]);
        }
        if (idade[i] < MenorIdade)
        {
            MenorIdade = idade[i];
            strcpy(PessoaNova, Nome[i]);
        }

        printf("Digite seu peso: ");
        scanf("%f", &peso[i]);

        if (peso[i] > MaiorPeso)
        {
            MaiorPeso = peso[i];
            strcpy(PessoaGorda, Nome[i]);
        }
        if (peso[i] < MenorPeso)
        {
            MenorPeso = peso[i];
            strcpy(PessoaMagra, Nome[i]);
        }

        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);

        if (altura[i] > Maioraltura)
        {
            Maioraltura = altura[i];
            strcpy(PessoaAlta, Nome[i]);
        }
        if (altura[i] < Menoraltura)
        {
            Menoraltura = altura[i];
            strcpy(PessoaBaixa, Nome[i]);
        }

        fflush(stdin);
        system("cls");
    }

       for (i = 0; i < 5; i++){
        printf("%d Pessoa\n", i + 1);
        printf("Nome: %s\n", Nome[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Peso: %.2f\n", peso[i]);
        printf("Altura: %.2f\n", altura[i]);
       }


    printf("Pessoa mais alta\n");
    printf("Nome: %s\n", PessoaAlta);
    printf("Altura: %.2f\n", Maioraltura);
    printf("\n");
    fflush(stdin);
    printf("Pessoa mais baixa\n");
    printf("Nome: %s\n", PessoaBaixa);
    printf("Altura: %.2f\n", Menoraltura);
    printf("\n");
    fflush(stdin);
    printf("Pessoa mais pesada\n");
    printf("Nome: %s\n", PessoaGorda);
    printf("Peso: %.2f\n", MaiorPeso);
    printf("\n");
    fflush(stdin);
    printf("Pessoa mais leve\n");
    printf("Nome: %s\n", PessoaMagra);
    printf("Peso: %.2f\n", MenorPeso);
    printf("\n");
    fflush(stdin);
    printf("Pessoa mais velha\n");
    printf("Nome: %s\n", PessoaVelha);
    printf("Idade: %d\n", MaiorIdade);
    printf("\n");
    fflush(stdin);
    printf("Pessoa mais nova\n");
    printf("Nome: %s\n", PessoaNova);
    printf("Idade: %d\n", MenorIdade);
    printf("\n");

    return 0;
}