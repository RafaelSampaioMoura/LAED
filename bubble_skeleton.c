#include <stdlib.h>
#include <stdio.h>

int comparacoes = 0; // Contador global
int trocas = 0;      // Contador global

static void swp_int(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int v[], int n)
{
    // TODO: Implementar aqui
    // Incrementar comparacoes++ a cada comparação
    // Incrementar trocas++ a cada troca
    if (!v || n == 1)
    {
        return;
    }

    int i, j;
    int sorted;
    for (i = 0; i < n; i++)
    {
        /* code */
        sorted = 1;
        for (j = 0; j < n - i - 1; j++)
        {
            comparacoes++;
            if (v[j] > v[j + 1])
            {
                printf("%d, %d\n", v[j], v[j + 1]);
                swp_int(&v[j], &v[j + 1]);
                trocas++;
                sorted = 0;
            }
            /* code */
        }
        if (sorted == 1)
        {
            break;
        }
    }
}

void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    printf("Vetor original: ");
    imprimirVetor(dados, n);

    bubbleSort(dados, n);

    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    return 0;
}
