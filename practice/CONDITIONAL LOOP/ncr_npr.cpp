//Find Ncr & Npr
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}

int main()
{
    int n,r;
    cout<<"Enter N :";cin>>n;
    cout<<"Enter R :";cin>>r;
    cout<<"nPr is :";
    cout<<fact(n)/fact(n-r);
    cout<<"\nnCr is :";
    cout<<fact(n)/(fact(n-r)*fact(r));
    return 0;
}