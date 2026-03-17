#include <stdlib.h>
#include <stdio.h>
#include <header.h>

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