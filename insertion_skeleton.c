#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    /* data */
    long comparisons;
    long swaps;
} stats;

void imprimeVetor(int v[], int n);

void insertionSort(int v[], int n, stats *stats, bool order);

void swp_int(int *a, int *b);

int main(int argc, char const *argv[])
{
    stats s = {0, 0};
    /* code */
    int A[] = {5, 2, 4, 6, 1, 3};
    int B[] = {1, 2, 3, 4, 5, 6};
    int C[] = {6, 5, 4, 3, 2, 1};
    insertionSort(A, 6, &s, false);
    imprimeVetor(A, 6);
    insertionSort(B, 6, &s, true);
    imprimeVetor(B, 6);
    insertionSort(C, 6, &s, false);
    imprimeVetor(C, 6);
    return 0;
}

void swp_int(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void insertionSort(int v[], int n, stats *stats, bool order)
{
    if (!v || n == 1)
    {
        return;
    }

    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        /* code */
        bool wasSwpd = false;
        for (j = i; j > -1; j--)
        {
            /* code */
            //printf("I:%d, chave: %d, ", j, v[j]);
            //imprimeVetor(v, 6);
            stats->comparisons++;
            if (order)
            {
                if (v[j] > v[j + 1])
                {
                    stats->swaps++;
                    swp_int(&v[j], &v[j + 1]);
                }
                //imprimeVetor(v, 6);
            }
            else
            {
                if (v[j] < v[j + 1])
                {
                    stats->swaps++;
                    swp_int(&v[j+1], &v[j]);
                }
                //imprimeVetor(v, 6);
            }
        }
    }
}

void imprimeVetor(int v[], int n)
{
    printf("[");
    int i;
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d", v[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");
}
