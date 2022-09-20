//Reverse the string 
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char stri[20],rev[20];
    cout<<"Enter string ";cin>>stri;
    int len=strlen(stri);
    for(int i=1;i<=len;i++)
    {
        rev[i]=stri[len-i];
    }
    for(int i=1;i<=len;i++)
    {
        cout<<rev[i];
    }
    return 0;
}