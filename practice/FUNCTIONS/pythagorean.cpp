//Write a function to check if a given triplet is a Pythagorean triplet or not. (A Pythagorean triplet is when the sum of the square of two numbers is equal to the square of the third number).
#include<iostream>
#include<math.h>
using namespace std;

int pytha(int n1,int n2,int n3)
{
    if(n1>=n2 && n1>=n3)
    {
        if(pow(n1,2)==pow(n2,2)+pow(n3,2))
        {
            cout<<"Tripelet are pythagorean";
        }
        else{
            cout<<"Tripelet are not pythagorean ";
        }
    }
    if(n2>=n1 && n2>=n3)
    {
        if(pow(n2,2)==pow(n1,2)+pow(n3,2))
        {
            cout<<"Tripelet are pythagorean";
        }
        else{
            cout<<"Tripelet are not pythagorean ";
        }
    }
    if(n3>=n2 && n3>=n1)
    {
        if(pow(n3,2)==pow(n2,2)+pow(n1,2))
        {
            cout<<"Tripelet are pythagorean";
        }
        else{
            cout<<"Tripelet are not pythagorean ";
        }
    }
    return 0;
}

int main()
{
    int n1,n2,n3;
    cout<<"Enter number N1,N2,N3 :";
    cin>>n1>>n2>>n3;
    pytha(n1,n2,n3);
    return 0;
}