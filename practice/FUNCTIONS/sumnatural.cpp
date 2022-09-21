//Write a function that returns the sum of first n natural numbers.
#include<iostream>
using namespace std;

int summ(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter Number :";
    cin>>n;
    cout<<"sum is "<<summ(n);

    return 0;
}