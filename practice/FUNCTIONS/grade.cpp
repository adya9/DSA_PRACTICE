//Write a program that will ask the user to enter his/her marks (out of 100). Define a method that will display grades according to the marks entered as below:
#include<iostream>
using namespace std;

int gradee(int n)
{
   if(n>=91 && n<=100)
   {
    cout<<"AA";
   }
   if(n>=81 && n<=90)
   {
    cout<<"AB";
   }
   if(n>=71 && n<=80)
   {
    cout<<"BB";
   }
   if(n>=61 && n<=70)
   {
    cout<<"BC";
   }
   if(n>=51 && n<=60)
   {
    cout<<"CD";
   }
   if(n>=41 && n<=50)
   {
    cout<<"DD";
   }
   else{
    cout<<"Fail";
   }
   return 0;
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    gradee(n);
    return 0;
}