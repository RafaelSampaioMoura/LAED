#include <stdlib.h>
#include <stdio.h>
#include <header.h>

void bubble_sort_order(int arr[], int n, stats *stats, int order)
{
    int i, j, swapped = 0;

    for (int i = 0; i < n; i++)
    {
        if (order == 1)
        {
            for (j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swp_int_stats(&arr[i], &arr[j], stats);
                    swapped = 1;
                }
                stats->comps++;
            }
        }

        if (order == -1)
        {
            for (j = i; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    swp_int_stats(&arr[i], &arr[j], stats);
                    swapped = 1;
                }
                stats->comps++;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}