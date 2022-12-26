#include <stdio.h>

print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

//max
int max_ele(int arr[], int size)
{
    int max =arr[0];

    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
           
        }
    }
     return max;
}

// min part
int min_ele(int arr[], int size)
{
    int min =arr[0];

    for (int j = 0; j < size; j++)
    {
        if (arr[j] < min)
        {
            min= arr[j];
           
        }
    }
    return min;
}

int main()
{
    int arr[] = {22,88, 2, 3, 55, 6, -1,7,8855};
    int size = sizeof(arr) / sizeof(int);
    print_arr(arr, size);
    printf("The maximum element in the array is: %d\n", max_ele(arr, size));
    printf("The minnimum element in the array is: %d\n", min_ele(arr, size));

    return 0;
}
