//Write a program to print the circumference and area of a circle of radius entered by user by defining your own method.
#include<iostream>

using namespace std;
double pi=3.14;
double cir(int r)
{
  
    return 2*pi*r;
}
double areaa(int r)
{
   return pi*r*r;
}

int main()
{
    int r;
    cout<<"Enter radius :";
    cin>>r;
    cout<<"Circumference is :"<<cir(r);
    cout<<"\nArea is :"<<areaa(r);
    return 0;
}