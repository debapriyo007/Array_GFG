#include <stdio.h>

int find_freq(int arr[], int size, int element)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            count++;
    }
    return count;
}

int main()
{

    int arr[] = {21, 2, 6, 2, 3, 6, 3, 2, 35, 1, 2, 2};
    int size = sizeof(arr) / sizeof(int);
    int element = 2;

    printf("The array element are:---->\n");
    for (int i = 0; i < size; i++)
    {

        printf("%d  ", arr[i]);
    }
    int count = find_freq(arr, size, element);
    printf("\nThe num %d frequency in the array is:%d\n", element, count);

    return 0;
}