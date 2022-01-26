#include<stdio.h>
int f1(int a)
{
    if(a>0)
    {
      printf("%d ",a);
      f2(a-1);
    }
}
int f2(int a)
{
    if(a>0)
    {
       printf("%d ",a);
       f1(a/2);
    }
}
int main()
{
    int a = 15;
    f1(a);
}
