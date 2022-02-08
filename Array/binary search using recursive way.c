
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
    printf("The array element are: ");
    for(i=0; i<arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int recursivebinarysearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if(key == a[mid])
            return mid;
        else if(key <= a[mid])
            return recursivebinarysearch(a,l,mid-1,key);
        else
            return recursivebinarysearch(a,mid+1,h,key);
    }
   // return -1;
}
int main()
{
    struct Array arr = {{3,6,7,8,10},5,10};

    printf("The given value is at %d position\n",recursivebinarysearch(arr.A,0,arr.length,6));
    print(arr);

}
