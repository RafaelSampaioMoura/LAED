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


void swp_int_stats (int *a, int *b, stats *s);

void swp_int (int *a, int *b);

void bubble_sort_basic(int arr[], int n, stats* stats);

void bubble_sort_improved(int arr[], int n, stats *stats);

void imprimirVetor(int v[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    stats s = {0, 0};
    stats s_two = {0, 0};

    int art[] = {23, 65, 12, 34, 56, 78, 32, 12, 45, 23, 56};
    int art_two[] = {23, 65, 12, 34, 56, 78, 32, 12, 45, 23, 56};
    int n = sizeof(art)/ sizeof(art[0]);
    imprimirVetor(art, n);
    bubble_sort_basic(art, n, &s);
    imprimirVetor(art, n);
    printf("Comparações: %ld\n", s.comps);
    printf("Mudanças: %ld\n", s.swaps);

    imprimirVetor(art_two, n);
    bubble_sort_improved(art_two, n, &s_two);
    imprimirVetor(art_two, n);
    printf("Comparações: %ld\n", s_two.comps);
    printf("Mudanças: %ld\n", s_two.swaps);

    return 0;
}


void swp_int (int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void swp_int_stats (int *a, int *b, stats *s)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    s->swaps++;
};

void bubble_sort_basic(int arr[], int n, stats *stats)
{
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swp_int_stats(&arr[i], &arr[j], stats);
            }
            stats->comps++;
        }
    }
}

void bubble_sort_improved(int arr[], int n, stats *stats)
{
    bool swapped;
    int i, j;

    for(int i = 0; i < n; i++)
    {
        //Isso melhora a performance do código por que, quando não houver mais nenhuma troca,
        //não é preciso continuar atravessando o vetor, então o algoritmo finaliza cedo.
        swapped = false;
        for(j = i; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swp_int_stats(&arr[i], &arr[j], stats);
                swapped = true;
            }
            stats->comps++;
        }

        if(!swapped)
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