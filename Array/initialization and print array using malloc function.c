#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;

};

void print(struct Array arr)
{
    int i;
    printf("The Entered Elements are: ");
    for(i=1;i<=arr.length;i++)
        printf("%d ",arr.A[i]);
}

int main()
{
    struct Array arr;
    int i,n;
    printf("Enter the size of an Array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("How many number you want to  enter: ");
    scanf("%d",&n);

    printf("Enter the  numbers you want: ");
    for(i=1;i<=n;i++)
        scanf("%d",&arr.A[i]);
    arr.length = n;
    print(arr);

    return 0;
}
