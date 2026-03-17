#include <stdlib.h>
#include <stdio.h>
#include <header.h>

void swp_int(int *a, int *b, stats *s);

void selection_sort(int arr[], int n, stats *s, int ordem);

void imprimir_vetor(int v[], int n);

int main(int argc, char const *argv[])
{
    int arr_one[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr_two[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_three[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_four[20];
    int arr_five[20];

    int N = 100, i;

    for (i = 0; i < 20; i++)
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

    printf("Array: Organizado, SelectionSort Crescente\n");
    imprimir_vetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    selection_sort(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])), &s_one, 1);
    imprimir_vetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    printf("Comparações: %ld\n", s_one.comps);
    printf("Mudanças: %ld\n", s_one.swaps);

    printf("Array: Organizado, SelectionSort Decrescente\n");
    imprimir_vetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    selection_sort(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])), &s_two, -1);
    imprimir_vetor(arr_one, (sizeof(arr_one) / sizeof(arr_one[0])));
    printf("Comparações: %ld\n", s_two.comps);
    printf("Mudanças: %ld\n", s_two.swaps);

    printf("Array: Invertido, SelectionSort Crescente\n");
    imprimir_vetor(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])));
    selection_sort(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])), &s_three, 1);
    imprimir_vetor(arr_two, (sizeof(arr_two) / sizeof(arr_two[0])));
    printf("Comparações: %ld\n", s_three.comps);
    printf("Mudanças: %ld\n", s_three.swaps);

    printf("Array: Invertido, SelectionSort Decrescente\n");
    imprimir_vetor(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])));
    selection_sort(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])), &s_four, -1);
    imprimir_vetor(arr_three, (sizeof(arr_three) / sizeof(arr_three[0])));
    printf("Comparações: %ld\n", s_four.comps);
    printf("Mudanças: %ld\n", s_four.swaps);

    printf("Array: Aleatório, SelectionSort Crescente\n");
    imprimir_vetor(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])));
    selection_sort(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])), &s_five, 1);
    imprimir_vetor(arr_four, (sizeof(arr_four) / sizeof(arr_four[0])));
    printf("Comparações: %ld\n", s_five.comps);
    printf("Mudanças: %ld\n", s_five.swaps);

    printf("Array: Aleatório, SelectionSort Decrescente\n");
    imprimir_vetor(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])));
    selection_sort(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])), &s_six, -1);
    imprimir_vetor(arr_five, (sizeof(arr_five) / sizeof(arr_five[0])));
    printf("Comparações: %ld\n", s_six.comps);
    printf("Mudanças: %ld\n", s_six.swaps);
    return 0;

    return 0;
}

void swp_int(int *a, int *b, stats *s)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    s->swaps++;
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
                swp_int(&arr[i], &arr[smallest], s);
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
                swp_int(&arr[i], &arr[biggest], s);
                swapped = 1;
            }
        }
    }
};

void imprimir_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    };
    printf("\n");
}