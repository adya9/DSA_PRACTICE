//Write a program to print the sum of negative numbers, sum of positive even numbers and the sum of positive odd numbers from a list of numbers (N) entered by the user. The list terminates when the user enters a zero.
#include<iostream>
using namespace std;

int main()
{
   int n,sumn=0,sume=0,sumo=0;
   
   do
   
   {
    cout<<"Enter number :";cin>>n;
    if (n<0)
    {
        sumn+=n;

    }
    else if(n%2==0)
    {
        sume+=n;
    }
    else{
        sumo+=n;
    }
    
   }
   while (n!=0);
   
   
   cout<<"required sum is sumn :"<<sumn<<" sume :"<<sume<<" sumo :"<<sumo;

    return 0;
}