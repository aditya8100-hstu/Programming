#include<stdio.h>

void func1(int a)
{
    if(a>0)
    {
        printf("The value of a is: %d\n",a);
        func1(a-1);
    }
    printf("The multiplication is: %d\n",a*2);
}

void func2(int a)
{
    if(a>0)
    {
        printf("\n");
        func2(a-1);
        printf("The value of a is: %d\n",a);
    }
    printf("The multiplication is: %d\n",a*2);
}
int main()
{
    int a=10;
    func1(a);
    func2(a);
}
