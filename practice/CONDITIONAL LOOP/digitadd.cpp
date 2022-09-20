//Sum Of A Digits Of Number
#include<iostream>
using namespace std;

int main()
{
    int n,rem,quo,sum=0;
    cout<<"Enter number :";cin>>n;
    while (n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<"required sum is :"<<sum;
    
    return 0;
}