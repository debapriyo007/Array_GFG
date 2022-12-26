#include <stdio.h>

_print_arr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void cycl_rot(int arr[], int size)
{
    int s =arr[size-1];
    for(int j=size-1; j>0;j--)
    {
        arr[j]=arr[j-1];
       
    }
     arr[0]=s;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    printf("The actual array:->\n");
    _print_arr(arr, size);
    printf("After performing cyclically rotation:->\n");
    cycl_rot(arr, size);
    _print_arr(arr, size);

    return 0;
}