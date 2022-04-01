#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cout<<"Enter a string: " ;
    gets(a);
    char t;
    int i,j;
    for(j=0;a[j]!='\0';j++)
    {

    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    cout<<"Reverse of that string is: "<< a<<endl;
    return 0;
}
