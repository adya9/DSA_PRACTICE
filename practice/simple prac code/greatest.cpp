//Take 2 numbers as input and print the largest number.
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter both number you want to compare:";
    cin>>n1>>n2;
    if(n1>n2)
    {
        cout<<"The number "<<n1<<" is greater than "<<n2;
    }
    else if(n1<n2)
    {
        cout<<"The number "<<n2<<" is greater than "<<n1;
    }
    else{
        cout<<"The number "<<n1<<" is equal to "<<n2;
    }
    return 0;
}