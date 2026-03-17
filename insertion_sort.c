#include <stdlib.h>
#include <stdio.h>
#include <header.h>

void swp_int(int *a, int *b);

void insertion_sort(int arr[], int n, stats *s);

void imprimir_vetor(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int N = 100;

    stats s = {0, 0};

    int arr[20];

    
    printf("Inicial: ");
    imprimir_vetor(arr, 20);
    insertion_sort(arr, 20);
    printf("Final: ");
    imprimir_vetor(arr, 20);

    
    return 0;
}

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
            s->comp++;
        };
        arr[j + 1] = key;
        s->swaps++;
        printf("Intermediário: ");
        imprimir_vetor(arr, n);
        
        
    }
    
}