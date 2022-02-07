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
    printf("The given array is: ");
    for(i=0;i<arr.length;i++)
    {

        printf("%d ",arr.A[i]);
    }
}
int Linearsearch(struct Array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key == arr.A[i])
            return i+1;
    }
    return -1;
}
int main()
{
    struct Array arr = {{2,4,5,6,8,3},6,10};
    printf("The searching value is in %d place\n",Linearsearch(arr,8));
    print(arr);

}
