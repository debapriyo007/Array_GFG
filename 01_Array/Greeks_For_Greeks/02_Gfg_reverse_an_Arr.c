#include <stdio.h>
#include <stdlib.h>

 void print_arr(int arr[], int size)
{
    int i = 0;
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int reverse_arr(int arr[], int size)
{
 int first, second;
    for( int i=0; i<size/2;i++)
    {
        first=arr[i];
        second=arr[size-i-1];
        arr[i]=second;
        arr[size-i-1]=first;

    }
}

int main()
{

    int arr[] = {55, 2, 47, 4, 505, 8};
    int size = sizeof(arr) / sizeof(int);
    printf("Printing the acctual arry:--->\n");
    print_arr(arr, size);
    reverse_arr(arr, size);
    print_arr(arr, size);
   
}