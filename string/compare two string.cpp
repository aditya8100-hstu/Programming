#include<bits/stdc++.h>
using namespace std;
int compare(char *c, char *ch)
{
    int i,j;
    for(i=0,j=0; c[i]!='\0',ch[j]!='\0'; i++,j++)
    {

        if(c[i]==ch[j])
            return 0;
    }
    return 1;
}
int main()
{
    char c[100];
    char ch[100];
    gets(c);
    gets(ch);
    if(compare(c,ch))
        cout<<"They are equal"<<endl;
    else
        cout<<"They are not equal"<<endl;
    return 0;
}
