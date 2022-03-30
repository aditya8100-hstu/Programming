#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    cout<<"Enter Your String: ";
    gets(c);

    int i,vcount=0,ccount=0,wordcount=0;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' || c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
            vcount++;
        else if((c[i]>=65&&c[i]<=90)|| (c[i]>=97 && c[i]<=122))
            ccount++;
        else if(c[i]=' ' && c[i-1] != ' ')
            wordcount++;
    }
    cout<<"The number of vowel in that string: "<<vcount<<endl;
    cout<<"The number of consonent in that string: "<< ccount <<endl;
    cout<<"The number of word in that string: "<< wordcount+1 <<endl;
    return 0;

}
