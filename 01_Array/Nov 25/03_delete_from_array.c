#include <stdio.h>

print_Array(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void delete (int A[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        A[i] = A[i + 1];
    }
    if(index>size)
    {
        printf("Invalid position!!\n");
    }
    
}
int main()
{
    int A[100] = {12, 25, 58, 3, 41, 2};
    int size = 6;
    printf("The Array Elements are:-->\n");
    print_Array(A, size);
    printf("After deleting the elements are:->\n");
    delete (A, size, 21);
    print_Array(A, size);

    return 0;
}