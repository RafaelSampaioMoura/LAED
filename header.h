#ifndef HEADER_H
#define HEADER_H

typedef struct
{
    /* data */
    long comps;
    long swaps;
} stats;

//Funções de sorting
void bubble_sort_basic(int arr[], int n, stats *stats);
void bubble_sort_improved(int arr[], int n, stats *stats);
void bubble_sort_order(int arr[], int n, stats *stats, int order);
void insertion_sort(int arr[], int n, stats *s);
void selection_sort(int arr[], int n, stats *s, int ordem);

//Funções de utilidade
void imprimir_vetor(int v[], int n);
void swp_int(int *a, int *b);
void swp_int_stats(int *a, int *b, stats *s);
int* random_arr_gen(int num_limit, int length);

//Funções de teste
void test_function_bubble_basic();
void test_function_bubble_early_stop();
void test_function_selection_sort();
void test_fuction_insertion_sort();

#endif