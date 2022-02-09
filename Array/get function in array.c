#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};
int  getfunction(struct Array arr,int index)
{
    if( index>=0 && index<arr.length)
    {
      //return arr.A[index];
      printf("The array element is : %d\n",arr.A[index]);
    }
    else
        printf("Not found\n");
}
int print(struct Array arr)
{
    int i;
    printf("The array elements are: ");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
int main()
{
    struct Array arr = {{2,5,7,8,3,4},6,10};
    //printf("The array element is : %d\n",getfunction(arr,7));
    getfunction(arr,3);
    print(arr);
}
