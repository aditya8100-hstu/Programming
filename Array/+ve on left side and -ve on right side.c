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
    printf("The array elements are: ");
    for(i=0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}
int swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int changeArrayElementsSide(struct Array *arr)
{
    int i=0;
    int j = arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}
int main()
{
    struct Array arr= {{2,-3,5,-7,-8,-9,18},7,10};
    //printf("%d ",changeArrayElementsSide(&arr));
    changeArrayElementsSide(&arr);
    print(arr);
}
