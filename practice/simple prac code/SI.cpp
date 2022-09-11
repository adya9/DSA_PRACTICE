//Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.
#include<iostream>
using namespace std;

int main()
{
    float si,pri,rate;
    int time;

    cout<<"Enter principal :";
    cin>> pri;
    cout<<"Enter Rate :";
    cin>>rate;
    cout<<"Enter Time :";
    cin>>time;
    si=(pri*rate*time)/100;
    cout<<"Simple interest is :"<<si;
            return 0;
}