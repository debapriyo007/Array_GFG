#include <stdio.h>

print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int move_neg(int arr[], int size)
{
    int j = 0;
    int arr_2[size];
    // arr_2=(int*)malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {

            arr_2[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr_2[j] = arr[i];

            if (j != size - 1)
            {
                j++;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr_2[i]);
    }
}
int main()
{
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int size = sizeof(arr) / sizeof(int);
    print_arr(arr, size);
    move_neg(arr, size);

    return 0;
}