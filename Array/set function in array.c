#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

int setfunction(struct Array *arr,int index,int value)
{
    if(index>=0 && index<arr->length)
    {
       printf("The changed element is %d at %d index\n", arr->A[index] = value , index);
    }
    else
    {
        printf("Index not found\n");
    }
    print(arr);
}

int print(struct Array arr)
{
    int i;
    printf("The new array elements are: ");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
int main()
{
    struct Array arr = {{2,5,7,8,3,4},6,10};

    //printf("The array element is : %d\n",setfunction(&arr,9,10));
    setfunction(&arr,3,10);
}
