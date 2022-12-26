#include <stdio.h>

print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int peek_ind(int arr[], int size)
{
   
    for (int j = 0; j < size; j++)
    
    {
        if (arr[j] >= arr[j - 1] && arr[j] >= arr[j + 1])
        {
            return j;
        }
        
    }
}
int main()
{

    int arr[] = {20, 300, 5, 10, 100, 4};
    int size = sizeof(arr) / sizeof(int);
    print_arr(arr, size);
    int j=peek_ind(arr, size);
    printf("\nPeek elemrnt index is  %d \n", j);
}