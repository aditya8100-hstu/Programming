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
   for(i=0;i<arr.length;i++)
   {
       printf("%d ",arr.A[i]);
   }
}
int main()
{
    struct Array array1 = {2,5,7,1,9},10,5};
    struct Array array2 = {4,3,6,10,8},10,5};
    struct Array *arry3;

    print(arr);

}
