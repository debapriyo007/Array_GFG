#include <stdio.h>

void comm_ele(int arr_1[], int arr_2[], int arr_3[], int size_1, int size_2, int size_3)
{
    int i, j, k;
    i = j = k = 0;
    for (int i = 0; i < size_1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size_2; j++)
        {
            if (arr_1[i] == arr_2[j])
            {
                for (int k = 0; k < size_3; k++)
                {
                    if (arr_2[j] == arr_3[k])
                    {
                        flag = 1;
                        k++;
                        break;
                    }
                }
                j++;
                break;
            }
        }
        if (flag)
            printf(" %d ", arr_1[i]);
    }
}

int main()
{

    int arr_1[] = {1, 5, 10, 20, 40, 80};
    int arr_2[] = {6, 7, 20, 80, 100};
    int arr_3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int size_1 = sizeof(arr_1) / sizeof(int);
    int size_2 = sizeof(arr_1) / sizeof(int);
    int size_3 = sizeof(arr_1) / sizeof(int);

    printf("The common element are/is:-->");
    comm_ele(arr_1, arr_2, arr_3, size_1, size_2, size_3);

    return 0;
}