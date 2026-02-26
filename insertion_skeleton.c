#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    /* data */
    long comparisons;
    long swaps;
} stats;

void swp_int(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void insertionSort(int v[], int n)
{
    if (!v || n == 1)
    {
        return;
    }

    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        /* code */
        for (j = i; j > -1; j--)
        {
            /* code */

            if (v[j] > v[j + 1])
            {
                swp_int(&v[j], &v[j + 1]);
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

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {5, 2, 4, 6, 1, 3};
    int B[] = {1, 2, 3, 4, 5, 6};
    int C[] = {6, 5, 4, 3, 2, 1};
    insertionSort(A, 6);
    imprimeVetor(A, 6);
    insertionSort(B, 6);
    imprimeVetor(B, 6);
    insertionSort(C, 6);
    imprimeVetor(C, 6);
    return 0;
}
