#include <stdio.h>
ptint_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d  ", arr[i]);
    }
}


void find_dup(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[j]);
                return 0;
            }
            return -1;
        }
    }
}

int main()
{
    int arr[] = {55, 2, 3, 6, 3, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    printf("element in the array:-->\n");
    ptint_array(arr, size);
    printf("\nRepeat element is:-->\n");
    find_dup(arr, size);

    
}