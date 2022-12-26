
// Take two un-sorted array, return 1 if the array is subset of other...
#include <stdio.h>

print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int check_sub(int arr[], int arr_sub[], int size, int size_sub)
{
    int count = 0;
    for (int i = 0; i < size_sub; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr_sub[i] == arr[j])
            {
                count++;
            }
        }
    }
    if (count == size_sub)
    {
        return 1;
    }
    return -1;
}


int main()
{
    int arr[] = {8, 5, 11, 34, 23, 7, 6, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    // create anothe array check sub-set
    int arr_sub[] = {5, 3, 34, 7};
    int size_sub = sizeof(arr_sub) / sizeof(int);
    printf("The array element are:--->\n");
    print_array(arr, size);
    printf("%d", check_sub(arr, arr_sub, size, size_sub));

}