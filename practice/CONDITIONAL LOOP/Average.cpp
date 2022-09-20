#include<iostream>
using namespace std;
int main()
{
    int n;
    double sum=0.0;
    cout<<"enter how many no. :";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number :";
        cin>>num[i];
        sum+=num[i];
    }
   
    cout<<"Average is : "<<sum/n;

    return 0;
}