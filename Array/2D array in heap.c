#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a;
    a = (int **) malloc (3*sizeof(int));
    a[0] = (int *) malloc (4*sizeof(int));
    a[1] = (int *) malloc (4*sizeof(int));
    a[2] = (int *) malloc (4*sizeof(int));

    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

