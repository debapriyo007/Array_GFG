#include <stdio.h>

_print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

//Time complexity --O(n)

// int _find_led(int arr[] , int size)
//{
//     int max=arr[size-1];
//     for(int j=size-1;j>=0;j--)
//     {
//          if(arr[j]>=max)
//          {
//             printf(" %d ", arr[j]);
//             max=arr[j];
//          }
//     }
//}

// Time complexity O(N^2)

int _find_led(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }
            if (j == size - 1)
            {
                printf(" %d ", arr[i]);
            }
        }
    }
}

int main()
{

    int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr[]={2,1,3,5};

    int size = sizeof(arr) / sizeof(int);
    _print_arr(arr, size);
    printf("\nThe element are:--->\n");
    _find_led(arr, size);
    return 0;
}