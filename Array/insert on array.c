
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
    for(i=0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}
void insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index <= arr->length )
    {
        for(i=arr -> length; i>index; i--)
        {
            arr -> A[i] = arr -> A[i-1];
        }
        arr -> A[index] = x;
        arr -> length++;
    }
}
int main()
{
    struct Array arr  = {{1,2,3,5},10,4};
    insert(&arr, 2, 10);

    print(arr);

}
