#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define N(x)  (sizeof(x) / sizeof((x)[0]))

typedef struct
{
    /* data */
    long comps;
    long swaps;
} stats;


void swp_int (int *a, int *b, stats *s);

void bubble_sort_basic(int arr[], int n, stats* stats);

void imprimirVetor(int v[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    stats s = {0, 0};
    int art[] = {23, 65, 12, 34, 56, 78, 32, 12, 45, 23, 56};
    int n = sizeof(art)/ sizeof(art[0]);
    imprimirVetor(art, n);
    bubble_sort_basic(art, n, &s);
    imprimirVetor(art, n);
    printf("Comparações: %ld\n", s.comps);
    printf("Mudanças: %ld\n", s.swaps);

    return 0;
}


void swp_int (int *a, int *b, stats *s)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    s->swaps++;
}

void bubble_sort_basic(int arr[], int n, stats *stats)
{
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swp_int(&arr[i], &arr[j], stats);
            }
            stats->comps++;
        }
    }
}

void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}