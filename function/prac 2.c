#include<stdio.h>
void printline(void)
{
    int i;
    for(i=1; i<=40; i++)
    {
        printf("-");
        //printf("\n");
    }
    printf("\n");
}

int main()
{
    printline( );
    printf("I am Aditya\n");
    printline();
}
