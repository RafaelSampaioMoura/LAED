#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    /* data */
    long comps;
    long swaps;
} stats;

void swp_int_stats(int *a, int *b, stats *s);

void bubble_sort_order(int arr[], int n, stats *stats, int order);

void imprimir_vetor(int v[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    int N = 100, i;
    int arr_one[20];
    int arr_two[20];

    stats s_one = {0, 0};
    stats s_two = {0, 0};

    for (i = 0; i < 20; i++)
    {
        int value = rand() % (N + 1);
        arr_one[i] = value;
        arr_two[i] = value;
    }

    printf("Crescente\n");
    imprimir_vetor(arr_one, 20);
    bubble_sort_order(arr_one, 20, &s_one, 1);
    imprimir_vetor(arr_one, 20);
    printf("Comparações: %ld\n", s_one.comps);
    printf("Trocas: %ld\n\n", s_one.swaps);

    printf("Decrescente\n");
    imprimir_vetor(arr_two, 20);
    bubble_sort_order(arr_two, 20, &s_two, -1);
    imprimir_vetor(arr_two, 20);
    printf("Comparações: %ld\n", s_two.comps);
    printf("Trocas: %ld\n\n", s_two.swaps);

    return 0;
}

void bubble_sort_order(int arr[], int n, stats *stats, int order)
{
    int i, j, swapped = 0;

    for (int i = 0; i < n; i++)
    {
        if (order == 1)
        {
            for (j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swp_int_stats(&arr[i], &arr[j], stats);
                    swapped = 1;
                }
                stats->comps++;
            }
        }

        if (order == -1)
        {
            for (j = i; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    swp_int_stats(&arr[i], &arr[j], stats);
                    swapped = 1;
                }
                stats->comps++;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}

void swp_int_stats(int *a, int *b, stats *s)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    s->swaps++;
};

void imprimir_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}