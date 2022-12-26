#include <stdio.h>

int count_pair(int arr[], int size, int k)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
   return count;
}
int main()
{
    int arr[] = {1, 5, 7, 1};
    // int arr[]={1,5,7,-1,5};
    int size = sizeof(arr) / sizeof(int);
    int k = 6;
    int count=count_pair(arr, size, k);
    printf("The number of pairs of element is %d ",count);

    return 0;
}