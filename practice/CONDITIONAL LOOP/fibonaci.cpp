#include<iostream>
using namespace std;
int fib(int n)
{
    static int n1=0,n2=1,n3;
   if(n>0)
   {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<" ";
    fib(n-1);
   }   
    
}


int main()
{
    int num;
    cout<<"Enter number whose fibonacci series to find :";
    cin>>num;
    cout<<"0"<<" 1 ";
    fib(num-2);
    return 0;
}