#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Static array: ");
    int a[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Dynamic array: ");
    int *ptr;
    ptr = (int *) malloc(5*sizeof(int));

    ptr[0] = 6;
    ptr[1] = 7;
    ptr[2] = 8;
    ptr[3] = 9;
    ptr[4] = 10;
    for(int j=0; j<5; j++)
    {
        printf("%d ",ptr[j]);
    }

}
