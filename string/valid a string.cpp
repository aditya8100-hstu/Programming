#include<bits/stdc++.h>
using namespace std;
int validString(char *c)
{
    int i;
    for(i=0; c[i]!='\0'; i++)
    {
        if(!(c[i]>=48 && c[i]<=57) && !(c[i]>=65 && c[i]<=90) && !(c[i]>=97 && c[i]<=122) )
            return 0;
    }
    return 1;
}
int main()
{
    char c[100];
    cout<<"Give Your String: ";
    gets(c);
    if(validString(c))
        cout<<"The given string is Valid"<<endl;
    else
        cout<<"The given string is Not Valid"<<endl;
    return 0;
}
