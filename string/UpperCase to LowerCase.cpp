#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    cin>>c;
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]>=65 && c[i]<=90)
        {
         c[i] = c[i]+32;
        }
    }
    cout<<c;
    return 0;
}
