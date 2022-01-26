#include<stdio.h>
int fun(int a)
{
    if(a>2)
    {
        return a-3;
    }
    else
    {
        return fun(fun(a+1));
    }
}
int main()
{
    int a = 4;
    fun(a);
    printf("%d\n",a);
}
