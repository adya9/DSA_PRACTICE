//Write a program to print the factorial of a number by defining a method named 'Factorial'.
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return factorial(n-1)*n;
}

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<"Factorial is :"<<factorial(n);
    return 0;
}