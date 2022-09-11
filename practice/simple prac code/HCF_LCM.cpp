//Take 2 numbers as inputs and find their HCF and LCM.
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,a,b,temp,hcf,lcm;
    cout<<"Enter Number :\n";
    cout<<"Enter 1st number:";
    cin>>n1;
    cout<<"Enter 2nd number:";
    cin>>n2;
    a=n1;
    b=n2;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    cout<<"HCF of "<<n1<<" and "<<n2<<" is: "<<hcf;
    lcm=(n1*n2)/hcf;
    cout<<"\nLCM of "<<n1<<" and "<<n2<<" is: "<<lcm;
        return 0;

}