//Define a program to find out whether a given number is even or odd.
#include<iostream>
using namespace std;

int even_odd(int n)
{
    if(n%2==0)
    {
        cout<<"No. is Even";
        return 0;
    }
    else{
        cout<<"No. is odd";
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    even_odd(n);
    return 0;
}