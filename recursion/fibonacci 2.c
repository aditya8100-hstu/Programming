#include<stdio.h>
int fibo(int a)
{
    if(a<=1){
        return a;
    }
    else
    {
        return fibo(a-1)+fibo(a-2);
    }
}
int main(){
    printf("%d ",fibo(6));
}
