#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i;
    int contador = 0;
    char nomeProduto[999][200];
    int quantidade[200];
    float valorProduto[200];
    do
    {
        printf("====Venda====\n");
        printf("1     ||     Adicionar venda\n");
        printf("2     ||     Exibir total de vendas\n");
        printf("Insira uma opção: ");
        scanf("%d", &opcao);
        
        fflush(stdin);
        
            system("cls || clear");

        switch (opcao)
        {
        case 1:
            
            fflush(stdin);
            
            printf("Digite  o nome do produto: ");
            gets(nomeProduto[contador]);

            fflush(stdin);

            printf("Digite o valor do produto: ");
            scanf("%f", &valorProduto[contador]);
            
            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[contador]);
           
            contador++;
            
            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < contador; i++)
            {
                printf("%dº Vendas\n", i + 1);
                printf("Nome dos produtos: %s\n", nomeProduto[i]);
                printf("Valor dos produtos: %.2f\n", valorProduto[i]);
                printf("Quantidade disponivel: %d\n", quantidade[i]);
                printf("\n");
            }

            break;
        default:
            printf("Codigo invalido!\n");
            break;
        }
    } while (opcao != 2);

    return 0;
} 