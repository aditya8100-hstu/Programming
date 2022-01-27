#include<stdio.h>
int fact(int a)
{
    if(a==0)
    {
     return 1;
    }
    else
    {
     return fact(a-1)*a;
    }
}
int main()
{
    int n = 3;
    printf("%d\n",fact(n));
}
