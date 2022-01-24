#include<stdio.h>

void initialize(int *a,int *b)
{
    printf("Give me two numbers: \n");
    printf("First Number: ");
    scanf("%d",a);
    printf("Second Number: ");
    scanf("%d",b);
}
int add(int a, int b)
{
    int c = a+b;
    return c;
}
void print(int c)
{
    printf("The result is: %d \n",c);
}

int main()
{
    int a,b,c;
    initialize(&a,&b);
    c = add(a,b);
    print(c);
}
