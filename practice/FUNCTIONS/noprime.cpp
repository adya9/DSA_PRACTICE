//Write a function that returns all prime numbers between two given numbers
#include<iostream>
using namespace std;

int prime(int n1,int n2)
{
    int flag=0;
    for(int i=n1;i<=n2;i++)
    {
        if(i==1 || i==0)
        {
            continue;
        }
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            cout<<i<<",";
        }
        
    }
    return 0;
}

int main()
{
    int n1,n2;
    cout<<"Enter number N1 and N2  :";
    cin>>n1>>n2;

    prime(n1,n2);
    return 0;
}