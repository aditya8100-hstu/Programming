#include<stdio.h>

int fact(int a)
{
    if(a==0) return 1;
    return fact(a-1)*a;
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    int result = num/den;
    return result;
}

int main()
{
    printf("%d\n",nCr(5,5));
}
