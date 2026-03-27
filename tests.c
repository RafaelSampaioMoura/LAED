#include "sorting_algo.c"

void test_function_bubble_basic()
{
    stats s = {0, 0};
    int arr_vazio[0];
    int arr_unico[1] = {1};
    int arr_integral[10] = {-1, -2, -3, -4, -5, 0, 5, 4, 3, 2, 1};
    int arr_organizado[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_invertido[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_aleatorio[10];
    int length = 10;
    int num_limit = 100;

    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr_aleatorio[i] = value;
    }

    printf("==========+==========\n");
    printf("Vetor Integral c/ BubbleSort Básico:\n");
    imprimir_vetor(arr_integral, 10);
    bubble_sort_improved(arr_integral, 10, &s);
    imprimir_vetor(arr_integral, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Único c/ BubbleSort Básico:\n");
    imprimir_vetor(arr_unico, 1);
    bubble_sort_improved(arr_unico, 1, &s);
    imprimir_vetor(arr_unico, 1);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor vazio c/ BubbleSort Básico:\n");
    bubble_sort_improved(arr_vazio, 0, &s);

    printf("==========+==========\n");
    printf("Vetor Ordenado c/ BubbleSort Básico:\n");
    imprimir_vetor(arr_organizado, 10);
    bubble_sort_basic(arr_organizado, 10, &s);
    imprimir_vetor(arr_organizado, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Invertido c/ BubbleSort Básico:\n");
    imprimir_vetor(arr_invertido, 10);
    bubble_sort_basic(arr_invertido, 10, &s);
    imprimir_vetor(arr_invertido, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Aleatório c/ BubbleSort Básico:\n");
    imprimir_vetor(arr_aleatorio, 10);
    bubble_sort_basic(arr_aleatorio, 10, &s);
    imprimir_vetor(arr_aleatorio, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;
}

void test_function_bubble_early_stop()
{
    stats s = {0, 0};
    int arr_vazio[0];
    int arr_unico[1] = {1};
    int arr_integral[10] = {-1, -2, -3, -4, -5, 0, 5, 4, 3, 2, 1};
    int arr_organizado[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_invertido[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_aleatorio[10];
    int length = 10;
    int num_limit = 100;

    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr_aleatorio[i] = value;
    }

    printf("==========+==========\n");
    printf("Vetor Integral c/ BubbleSort EarlyStop:\n");
    imprimir_vetor(arr_integral, 10);
    bubble_sort_improved(arr_integral, 10, &s);
    imprimir_vetor(arr_integral, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    printf("==========+==========\n");
    printf("Vetor Único c/ BubbleSort EarlyStop:\n");
    imprimir_vetor(arr_unico, 1);
    bubble_sort_improved(arr_unico, 1, &s);
    imprimir_vetor(arr_unico, 1);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    printf("==========+==========\n");
    printf("Vetor vazio c/ BubbleSort EarlyStop:\n");
    bubble_sort_improved(arr_vazio, 0, &s);

    printf("==========+==========\n");
    printf("Vetor Ordenado c/ BubbleSort EarlyStop:\n");
    imprimir_vetor(arr_organizado, 10);
    bubble_sort_improved(arr_organizado, 10, &s);
    imprimir_vetor(arr_organizado, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Invertido c/ BubbleSort EarlyStop:\n");
    imprimir_vetor(arr_invertido, 10);
    bubble_sort_improved(arr_invertido, 10, &s);
    imprimir_vetor(arr_invertido, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Aleatório c/ BubbleSort EarlyStop:\n");
    imprimir_vetor(arr_aleatorio, 10);
    bubble_sort_improved(arr_aleatorio, 10, &s);
    imprimir_vetor(arr_aleatorio, 10);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;
}

void test_function_selection_sort()
{
    stats s = {0, 0};
    int arr_organizado[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr_invertido[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_aleatorio[20];
    int length = 20;
    int num_limit = 100;

    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr_aleatorio[i] = value;
    }

    printf("==========+==========\n");
    printf("Vetor Ordenado c/ SelectionSort:\n");
    imprimir_vetor(arr_organizado, 20);
    selection_sort(arr_organizado, 20, &s, 1);
    imprimir_vetor(arr_organizado, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Invertido c/ SelectionSort:\n");
    imprimir_vetor(arr_invertido, 20);
    selection_sort(arr_invertido, 20, &s, 1);
    imprimir_vetor(arr_invertido, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Aleatório c/ SelectionSort:\n");
    imprimir_vetor(arr_aleatorio, 20);
    selection_sort(arr_aleatorio, 20, &s, 1);
    imprimir_vetor(arr_aleatorio, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;
}

void test_fuction_insertion_sort()
{
    stats s = {0, 0};
    int arr_organizado[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr_invertido[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr_aleatorio[20];
    int length = 20;
    int num_limit = 100;

    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr_aleatorio[i] = value;
    }
    int quase_ordenado[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 18, 19};

    printf("==========+==========\n");
    printf("Vetor Ordenado c/ InsertionSort:\n");
    imprimir_vetor(arr_organizado, 20);
    insertion_sort(arr_organizado, 20, &s);
    imprimir_vetor(arr_organizado, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Invertido c/ InsertionSort:\n");
    imprimir_vetor(arr_invertido, 20);
    insertion_sort(arr_invertido, 20, &s);
    imprimir_vetor(arr_invertido, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Aleatório c/ InsertionSort:\n");
    imprimir_vetor(arr_aleatorio, 20);
    insertion_sort(arr_aleatorio, 20, &s);
    imprimir_vetor(arr_aleatorio, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;

    printf("==========+==========\n");
    printf("Vetor Quase Organizado c/ InsertionSort:\n");
    imprimir_vetor(quase_ordenado, 20);
    insertion_sort(quase_ordenado, 20, &s);
    imprimir_vetor(quase_ordenado, 20);
    printf("Comparações: %ld\t Trocas: %ld\t\n", s.comps, s.swaps);

    s.comps = 0;
    s.swaps = 0;
}