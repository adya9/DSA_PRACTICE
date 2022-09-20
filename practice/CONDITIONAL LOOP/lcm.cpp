//LCM of two number
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,gcd,lcm;
    cout<<"Enter number1 :";
    cin>>n1;
    cout<<"Enter number2 :";
    cin>>n2;
    for(int i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    cout<<"Lcm is :"<<lcm;
    return 0;
}