#include <stdio.h>

_print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

// find max
int _find_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// couont sort..
int count_sort(int arr[], int size)
{
    int *C;
    int max = _find_max(arr, size);
    C = (int *)malloc(sizeof(int) * (max + 1));
    for (int i = 0; i < max + 1; i++)
    {
        C[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        C[arr[i]]++;
    }
    int i = 0, j = 0;
    while (j < max + 1)
    {
        if (C[j] > 0)
        {
            arr[i++] = j;
            C[j]--;
        }
        else
            j++;
    }
}

int kth_smalles(int arr[], int size, int k)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
           count++;
           if(count==k)
           {
            return arr[i];
           }
    }
}

int main()
{

    int arr[] = {55, 8, 15, 2, 21, 5};
    int size = sizeof(arr) / sizeof(int);
    int k = 3;
    //_print_arr(arr, size);
    count_sort(arr, size);
    printf("\n--------------------------------\n");
    _print_arr(arr, size);
    //int element = kth_small(arr, size);
    printf("\nK'th smallest element is:  %d\n", kth_smalles(arr, size,3));
    return 0;
}