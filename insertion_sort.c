#include <stdlib.h>
#include <stdio.h>
#include <header.h>

void insertion_sort(int arr[], int n, stats *s)
{
    int i, j, key;

    for (i = 0; i < n; i++)
    {
        /* code */
        key = arr[i];
        j = i -1;
        
        while (j >= 0 && arr[j] > key)
        {
            /* code */
            arr[j + 1] = arr[j];
            j = j - 1;
            s->comps++;
        };
        arr[j + 1] = key;
        s->swaps++;
        printf("Intermediário: ");
        imprimir_vetor(arr, n);
    }
}