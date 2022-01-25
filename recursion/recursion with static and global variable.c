#include<stdio.h>
int y = 0;
int fun(int a)
{
    static int x = 0;
    if(a>0)
    {
        x++;
        y++;
        return  fun(a-1)+x+y;
    }
    return 0;
}
int main()
{
    int a = 4;
    printf("%d\n",fun(a));
}
