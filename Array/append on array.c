#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void print (struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void append(struct Array *arr , int x)
{
    if(arr->length < arr->size)
        arr -> A[arr -> length++] = x;
}
int main()
{
    struct Array arr  = {{1,2,3,5},10,4};
    append(&arr, 10);

    print(arr);

}
