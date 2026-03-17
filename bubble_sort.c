#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <header.h>


void swp_int_stats (int *a, int *b, stats *s);

void swp_int (int *a, int *b);

void bubble_sort_basic(int arr[], int n, stats* stats);

void bubble_sort_improved(int arr[], int n, stats *stats);

void imprimirVetor(int v[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    int arr_one[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr_two[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_three[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_four[20];
    int arr_five[20];

    int N = 100, i;

    for(i = 0; i < 20; i++)
    {
        int value = rand() % (N + 1);
        arr_four[i] = value;
        arr_five[i] = value;
    }

    stats s_one = {0, 0};
    stats s_two = {0, 0};
    stats s_three = {0, 0};
    stats s_four = {0, 0};
    stats s_five = {0, 0};
    stats s_six = {0, 0};

    printf("Array: Organizado, BubbleSort Básico\n");
    imprimirVetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    bubble_sort_basic(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])), &s_one);
    imprimirVetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    printf("Comparações: %ld\n", s_one.comps);
    printf("Mudanças: %ld\n", s_one.swaps);

    printf("Array: Organizado, BubbleSort EarlyStop\n");
    imprimirVetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    bubble_sort_improved(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])), &s_two);
    imprimirVetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    printf("Comparações: %ld\n", s_two.comps);
    printf("Mudanças: %ld\n", s_two.swaps);

    printf("Array: Invertido, BubbleSort Básico\n");
    imprimirVetor(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])));
    bubble_sort_basic(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])), &s_three);
    imprimirVetor(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])));
    printf("Comparações: %ld\n", s_three.comps);
    printf("Mudanças: %ld\n", s_three.swaps);

    printf("Array: Invertido, BubbleSort EarlyStop\n");
    imprimirVetor(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])));
    bubble_sort_improved(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])), &s_four);
    imprimirVetor(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])));
    printf("Comparações: %ld\n", s_four.comps);
    printf("Mudanças: %ld\n", s_four.swaps);

    printf("Array: Aleatório, BubbleSort Básico\n");
    imprimirVetor(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])));
    bubble_sort_basic(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])), &s_five);
    imprimirVetor(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])));
    printf("Comparações: %ld\n", s_five.comps);
    printf("Mudanças: %ld\n", s_five.swaps);

    printf("Array: Aleatório, BubbleSort EarlyStop\n");
    imprimirVetor(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])));
    bubble_sort_improved(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])), &s_six);
    imprimirVetor(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])));
    printf("Comparações: %ld\n", s_six.comps);
    printf("Mudanças: %ld\n", s_six.swaps);
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

void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}