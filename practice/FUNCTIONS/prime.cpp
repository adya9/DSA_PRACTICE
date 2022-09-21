//Define a method to find out if a number is prime or not.
#include<iostream>
using namespace std;

int primee(int n)
{
    int m=n/2,flag=0;
    for(int i=2;i<=m;i++)
    {
        if(i%2==0)
        {
            flag=1;
            cout<<"No. is not prime";
            return 0;
        }
    }
    if(flag==0)
    {
        cout<<"No. is prime";
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    primee(n);
    return 0;
}

