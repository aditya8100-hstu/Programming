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
    printf("The array elements are: ");
    for(i=0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}

int sumfunction (struct Array arr)
{
    int sum = 0;
    for(int i=0;i<arr.length;i++)
    {
        sum = sum+arr.A[i];
    }
    return sum;
}

float averagefunction(struct Array arr)
{
     return (float)sumfunction(arr)/arr.length;
}

int main()
{
    struct Array arr = {{2,10,7,5,3,4},6,10};

    printf("The sum is : %d\n",sumfunction(arr));
    printf("The average is : %.2f\n",averagefunction(arr));
    print(arr);
}
