#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int comparacoes = 0; // Contador global
int trocas = 0;      // Contador global

static void swp_int(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort_NotImpoved(int v[], int n)
{
    // TODO: Implementar aqui
    // Incrementar comparacoes++ a cada comparação
    // Incrementar trocas++ a cada troca
    if (!v || n == 1)
    {
        return;
    }

    int i, j;
    for (i = 0; i < n; i++)
    {
        /* code */
        for (j = 0; j < n - i - 1; j++)
        {
            comparacoes++;
            if (v[j] > v[j + 1])
            {
                // printf("%d, %d\n", v[j], v[j + 1]);
                swp_int(&v[j], &v[j + 1]);
                trocas++;
            }
            /* code */
        }
    }
}

void bubbleSort_Impoved(int v[], int n)
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
                // printf("%d, %d\n", v[j], v[j + 1]);
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

void bubbleSort_Ordered(int v[], int n, bool order)
{
    // TODO: Implementar aqui
    // Incrementar comparacoes++ a cada comparação
    // Incrementar trocas++ a cada troca
    if (!v || n == 1)
    {
        return;
    }

    int i, j;
    for (i = 0; i < n; i++)
    {
        /* code */
        if (order)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                comparacoes++;
                if (v[j] > v[j + 1])
                {
                    // printf("%d, %d\n", v[j], v[j + 1]);
                    swp_int(&v[j], &v[j + 1]);
                    trocas++;
                }
                /* code */
            }
        }
        else
        {
            for (j = 0; j < n - i - 1; j++)
            {
                comparacoes++;
                if (v[j] < v[j + 1])
                {
                    // printf("%d, %d\n", v[j], v[j + 1]);
                    swp_int(&v[j], &v[j + 1]);
                    trocas++;
                }
                /* code */
            }
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
    int dados_one[] = {64, 34, 25, 12, 22, 11, 90};
    int dados_two[] = {64, 34, 25, 12, 22, 11, 90};
    int dados_three[] = {64, 34, 25, 12, 22, 11, 90};

    int n = 7;

    printf("Vetor original: ");
    imprimirVetor(dados_one, n);

    bubbleSort_Impoved(dados_one, n);

    printf("Vetor ordenado: ");
    imprimirVetor(dados_one, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    // Bubble Sort sem Early Stop
    printf("Vetor original: ");
    imprimirVetor(dados_two, n);

    bubbleSort_NotImpoved(dados_two, n);

    printf("Vetor ordenado: ");
    imprimirVetor(dados_two, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    //Bubble Sort decrescente
    printf("Vetor original: ");
    imprimirVetor(dados_three, n);

    bubbleSort_Ordered(dados_three, n, false);

    printf("Vetor ordenado: ");
    imprimirVetor(dados_three, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    return 0;
}
