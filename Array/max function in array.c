#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

int print(struct Array arr)
{
    int i;
    printf("The new array elements are: ");
    for(i=0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}
int maxfunction(struct Array arr)
{
    int i;
    int max = arr.A[0];
    for(i=1; i<arr.length; i++)
    {
        if(max<arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}
int main()
{
    struct Array arr = {{2,1,7,5,3,4},6,10};
    printf("The maximum array element is : %d\n",maxfunction(arr));
    print(arr);
}
