#include<stdio.h>

print_array( int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("    %d  ", arr[i]);
    }
    printf("\n");
}

int  serach_ele(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]== element)
        return i;
    }
   
    return -1;
}


int main()
{
int arr[]={212,522,3,31,2};
int size=sizeof(arr)/sizeof(int);
int element=3;
print_array(arr, size);
int serach_index=serach_ele(arr, size,element);
//serach_ele(arr, size,element);
printf("The element %d is found at the index %d!!\n", element, serach_index);

return 0;
}