//Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n;
    cout<<"Enter 1st number :";
    cin>>n1;
    cout<<"Enter 2nd number :";
    cin>>n2;
    cout<<"For Finding sum. press 1:\n";
    cout<<"For Finding substraction. press 2:\n";
    cout<<"For Finding product. press 3:\n";
    cout<<"For Finding division. press 4:\n";
    cin>>n;
    if(n==1)
    {
        cout<<"Sum is :"<<n1+n2;
           
    }
    else if(n==2)
    {
        cout<<"substraction is :"<<n1-n2;
         
    }
    else if(n==3)
    {
        cout<<"multiplication is :"<<n1*n2;
        
    }
    else if(n==4)
    {
        cout<<"division is :"<<n1/n2;
           
    }
    else
    {
        cout<<"Wrong Input ";
    }
    
    return 0;
}