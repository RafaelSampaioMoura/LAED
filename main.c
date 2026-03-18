#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "tests.c"

int main(int argc, char const *argv[])
{
    /* code */
    char c;

    printf("Press Enter to start: ");
    while ((c = getc(stdin)) != '\n');
    c = 'a';
    test_function_bubble_basic();

    printf("Press Enter to continue: ");
    while ((c = getc(stdin)) != '\n');
    test_function_bubble_early_stop();
    c = 'a';

    printf("Press Enter to continue: ");
    while ((c = getc(stdin)) != '\n');
    test_function_selection_sort();
    c = 'a';

    printf("Press Enter to continue: ");
    while ((c = getc(stdin)) != '\n');
    test_fuction_insertion_sort();
    return 0;
}
