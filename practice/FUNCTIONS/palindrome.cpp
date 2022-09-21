//Write a function to find if a number is a palindrome or not. Take number as parameter.
#include<iostream>
#include<math.h>
using namespace std;

int palind(int n)
{
    int a=n,rem,count=0,num=0;
    while(a!=0)
    {
        a=a/10;
        count++;
    }

    a=n;
    for(int i=count;i>0;i--)
    {
        rem=a%10;
        a=a/10;
        num+=round(pow(10,(i-1)))*rem;  //pow natural no. hi power m leta hai so 0 ni lega islie round lagaye hai
    }
    if(num==n)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    palind(n);
    return 0;
}