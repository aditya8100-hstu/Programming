#include<stdio.h>
int func(int a)
{
    if(a>0)
    {
        func(a-1);
        printf("%d ",a);
        func(a-1);
    }
}
int main()
{
    int a = 3;
    func(a);
}
