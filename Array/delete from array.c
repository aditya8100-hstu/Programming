#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
} ;
void print(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int delete(struct Array *arr , int index)
{
    int i,x=0;
    if(index>0 && index < arr->length)
    {
        x = arr->A[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }

}
int main()
{
    struct Array arr = {{1,2,3,4,5},5,10};
    printf("%d \n",delete(&arr,2));
    print(arr);
}
