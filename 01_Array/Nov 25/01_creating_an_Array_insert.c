#include <stdio.h>

print_Array(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}
int insert_ele(int A[], int size, int element, int capacity, int index)

{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i > index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index] = element;
    return 1;
}

int main()
{
    int A[100] = {12, 25, 58, 3, 41, 2};
    int size = 6;
    printf("The Array Elements are:-->\n");
    print_Array(A, size);
    printf("After Inserting the elements are:->\n");
    insert_ele(A,size, 99,100,1);
    print_Array(A, size);


    return 0;
}