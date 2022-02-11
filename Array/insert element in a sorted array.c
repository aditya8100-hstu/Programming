#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};
void print(struct Array arr)
{
    int i;
    printf("The new array elements are: ");
    for(i=0;i<arr.length+1;i++)
        printf("%d ",arr.A[i]);
}
int insertElementInSortedArray(struct Array *arr,int element)
{
    int i = arr->length-1;
    while(element>=0 && arr->A[i]>element)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = element;
    //arr->length++ ;
}
int main()
{
    struct Array arr= {{2,3,5,8,9,18},6,10};
    printf("The inserted array element index is: %d\n",insertElementInSortedArray(&arr,7));
    print(arr);
}
