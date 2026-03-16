#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define N(x)  (sizeof(x) / sizeof((x)[0]))

void swp_int (int *a, int *b);

void bubble_sort_basic(int arr[], int n);

void imprimirVetor(int v[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    int art[] = {23, 65, 12, 34, 56, 78, 32, 12, 45, 23, 56};
    int n = sizeof(art)/ sizeof(art[0]);
    imprimirVetor(art, n);
    bubble_sort_basic(art, n);
    imprimirVetor(art, n);

    return 0;
}


void swp_int (int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort_basic(int arr[], int n)
{
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swp_int(&arr[i], &arr[j]);
            }
        }
    }
}

void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}