//To find out whether the given String is Palindrome or not.
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char stri[20];
    int flag=0,len;
    cout<<"enter string :";
    cin>>stri;
    len= strlen(stri);
    for(int i=0;i<len;i++)
    {
        if(stri[i]!=stri[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Given string is not Palindrome";
    }
    else{
        cout<<"Given string is palindrome";
    }

    return 0;

}