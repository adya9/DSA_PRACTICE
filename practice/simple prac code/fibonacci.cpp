//To calculate Fibonacci Series up to n numbers.
#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,nextnum,num;
    cout<<"Enter number of term :";
    cin>>num;
    cout<<"Fibonacci series is :";
    for(int i=1;i<=num;i++)
    {
        if(i==1)
        {
           cout<<n1<<" "; 
        }
        else if(i==2)
        {
            cout<<n2<<" ";
        }
        else{
            nextnum=n1+n2;
            n1=n2;
            n2=nextnum;
            cout<<nextnum<<" ";
        }
    }
   
    return 0;
}