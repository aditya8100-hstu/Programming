#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};
int print(struct Array arr )
{
    int i;
    printf("The array elements are: ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void reversefunction(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1 ; i<j ; i++,j--)
        swap(&arr->A[i],&arr->A[j]);
}
int main()
{
    struct Array arr = {{2,5,7,1,9,10},6,10};
    reversefunction(&arr);
    print(arr);
}
