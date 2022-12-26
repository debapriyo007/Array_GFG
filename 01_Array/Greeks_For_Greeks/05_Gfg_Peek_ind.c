#include<stdio.h>


_print_arr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf(" %d ", arr[i]);
    }
}
// peek elem index 

int peek_ele_ind(int arr[], int size)
{
    int max=arr[0];
    int index=0;
    for(int i=0; i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
         
    }
    return index;
}

int main()
{
int arr[]={44,5,2,3,6,88,77};
int size=sizeof(arr)/sizeof(int );
_print_arr(arr, size);
int index=peek_ele_ind(arr, size);

printf("\nPeek element index is:%d\n",index);
return 0;
}