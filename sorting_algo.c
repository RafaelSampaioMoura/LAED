#include <stdlib.h>
#include "header.h"
#include "utils.c"

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
    int i, j, swapped = 0;

    for(int i = 0; i < n; i++)
    {
        //Isso melhora a performance do código por que, quando não houver mais nenhuma troca,
        //não é preciso continuar atravessando o vetor, então o algoritmo finaliza cedo.
        for(j = i; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swp_int_stats(&arr[i], &arr[j], stats);
                swapped = 1;
            }
            stats->comps++;
        }

        if(swapped == 0)
        {
            break;
        }
    }
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

void insertion_sort(int arr[], int n, stats *s)
{
    int i, j, key;

    for (i = 0; i < n; i++)
    {
        /* code */
        key = arr[i];
        
        while (j >= 0 && arr[j] > key)
        {
            /* code */
            arr[j + 1] = arr[j];
            j = j - 1;
            s->swaps++;
            s->comps++;
        };
        arr[j + 1] = key;
        s->swaps++;
        printf("Intermediário: ");
        imprimir_vetor(arr, n);
    }
}

void selection_sort(int arr[], int n, stats *s, int ordem)
{
    int i, j, swapped = 0;
    if (ordem == 1)
    {
        int smallest = 0;
        for (i = 0; i < n; i++)
        {
            swapped = 0;
            smallest = i;
            printf("Intermediário: ");
            imprimir_vetor(arr, n);
            for (j = i; j < n; j++)
            {
                if (arr[j] < arr[smallest])
                {
                    smallest = j;
                    s->comps++;
                };
            }
            if (smallest != i)
            {
                swp_int_stats(&arr[i], &arr[smallest], s);
                swapped = 1;
            }
        }
    }
    if (ordem == -1)
    {
        int biggest = 0;

        for (i = 0; i < n; i++)
        {
            biggest = i;
            swapped = 0;
            printf("Intermediário: ");
            imprimir_vetor(arr, n);
            for (j = i; j < n; j++)
            {
                if (arr[j] > arr[biggest])
                {
                    biggest = j;
                    s->comps++;
                };
            }
            if (biggest != i)
            {
                swp_int_stats(&arr[i], &arr[biggest], s);
                swapped = 1;
            }
        }
    }
};