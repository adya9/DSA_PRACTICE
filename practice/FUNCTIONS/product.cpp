//Define a method that returns the product of two numbers entered by user.
#include<iostream>
using namespace std;
int prod(int n1,int n2)
{
    int pr=n1*n2;
    return pr;
}

int main()
{
    int n1,n2;
    cout<<"Enter number N1 AND N2 :";
    cin>>n1>>n2;
    cout<<"There product is :"<<prod(n1,n2);
    return 0;
}