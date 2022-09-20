//palindrome
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,quo,rem,count=0,num=0;
    cout<<"Enter number :";
    cin>>n;
    int a=n;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        count++;

    }
    a=n;
    for(int i=count-1;i>=0;i--)
    {
        rem=a%10;
        a=a/10;
        num+=round(pow(10,i))*rem;
    }
    
    if(n==num)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }

    return 0;
}