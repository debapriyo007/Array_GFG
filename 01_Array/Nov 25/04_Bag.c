#include<stdio.h>

print_Array(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}
int print_even( int A[],int size)
{
    for(int i=0; i<size;i++)
    {
        if(A[i]%2==0)
        {
        printf("Even:%d\n", A[i]);
        }
    }
}

int print_odd( int A[],int size)
{
    for(int i=0; i<size;i++)
    {
        if(A[i]%2!=0)
        {
        printf("Odd:%d\n", A[i]);
        }
    }
}


int main()
{
int A[100] = {1,2,3,4,5,6,7,8};
    int size = 8;
    printf("The Array Elements are:-->\n");
    
    print_Array(A, size);
    printf("________________________________________________________\n");
    print_even(A,size);
    //print_Array(A, size);
    printf("________________________________________________________\n");
    print_odd(A,size);
   
return 0;
}