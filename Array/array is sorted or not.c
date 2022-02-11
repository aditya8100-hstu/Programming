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
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
int arrayIsSorted(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
     return 1;
}
int main()
{
    struct Array arr= {{2,3,5,7,8,9,18},7,10};
    printf("%d\n",arrayIsSorted(arr));
    print(arr);
}
