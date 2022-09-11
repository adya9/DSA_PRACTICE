//Keep taking numbers as inputs till the user enters ‘x’, after that print sum of all.
#include<iostream>
using namespace std;

int main()
{
    string n=" ";
    int sum=0;
    
    cout<<"Enter number :";
    cin>>n;
    while(n!="x" && n!="X")
    {
        sum=sum+stoi(n);
        cout<<"Enter number :";
        cin>>n;
    }
    cout<<"Total sum is :"<<sum;
    return 0;
}