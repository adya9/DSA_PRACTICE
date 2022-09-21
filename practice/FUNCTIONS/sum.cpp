//Write a program to print the sum of two numbers entered by user by defining your own method.
#include<iostream>
using namespace std;

int summ(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int n1,n2;
    cout<<"Enter number N1 and N2 :";
    cin>>n1>>n2;
    cout<<"Sum is "<<summ(n1,n2);
    return 0;
}