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
int binarysearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h = arr.length-1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h = (mid-1);
        else
            l= (mid+1);
    }
    return -1;
}
int main()
{
    struct Array arr = {{3,6,7,8,9},5,10};

    printf("The given value is at %d position\n",binarysearch(arr,7));
    print(arr);

}
