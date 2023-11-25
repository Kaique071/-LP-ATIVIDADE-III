#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL,"portuguese");
    int numeros[5];
    int numeros_impares = 0;
    int numeros_negativos = 0;
    int soma_numeros_pares = 0;
    int qtd_numeros_pares = 0;
    int i;

    printf("Digite 5 números inteiros:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0) {
            numeros_impares++;
        }

        if (numeros[i] < 0) {
            numeros_negativos++;
        }

        if (numeros[i] % 2 == 0) {
            soma_numeros_pares += numeros[i];
            qtd_numeros_pares++;
        }
    }
system("cls || clean");
    if (qtd_numeros_pares > 0) {
        float media_numeros_pares = (float)soma_numeros_pares / qtd_numeros_pares;
        float media_numeros = 0;

        int maior = numeros[0];
        int menor = numeros[0];

        for (i = 1; i < 5; i++) {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }

            if (numeros[i] < menor) {
                menor = numeros[i];
            }

            media_numeros += numeros[i];
        }

        media_numeros /= 5;

        printf("Quantidade de números í­mpares: %d\n", numeros_impares);
        printf("Quantidade de números negativos: %d\n", numeros_negativos);
        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
        printf("Média de números pares: %.2f\n", media_numeros_pares);
        printf("Média de números inseridos: %.2f\n", media_numeros);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    return 0;
}
