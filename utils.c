#include "header.h"

void imprimir_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void swp_int(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void swp_int_stats(int *a, int *b, stats *s)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    s->swaps++;
};

int* random_arr_gen(int num_limit, int length)
{
    int* arr = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr[i] = value;
    }

    return arr;
}