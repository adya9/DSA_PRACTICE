//Perfect Number In c++(the number whose sum of divisor(excluding itself)is equal to number)
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter number :";cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout<<n<<" is a perfect number.";
    }
    else{
        cout<<n<<" is not a perfect number.";
    }
    return 0;
}

