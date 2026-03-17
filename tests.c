#include "utils.c"
#include "sorting_algo.c"

void test_function_bubble_basic()
{
    stats s = {0, 0};
    int arr_organizado[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_invertido[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *arr_aleatorio[10] = random_arr_gen(100, 10);

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
    int arr_organizado[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_invertido[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *arr_aleatorio[10] = random_arr_gen(100, 10);

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
    int arr_organizado[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr_invertido[10] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *arr_aleatorio[10] = random_arr_gen(100, 20);

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
    int *arr_aleatorio[20] = random_arr_gen(100, 20);
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