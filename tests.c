typedef struct
{
    /* data */
    long comps;
    long swaps;
} stats;

void test_function(int arr[], stats *s);

int *random_arr_gen(int num_limit, int length)
{
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        /* code */
        int value = rand() % (num_limit + 1);
        arr[i] = value;
    }

    return arr[length];
};