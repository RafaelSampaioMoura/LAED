#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <header.h>

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