//Write a program to print whether a number is even or odd, also take input from the user.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    if(n%2==0)
    {
        cout<<"The number "<<n<<" is even";
    }
    else{
        cout<<"The number "<<n<<" is odd";
    }
    return 0;
}