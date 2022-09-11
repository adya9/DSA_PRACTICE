//To find Armstrong Number between two given number
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,count=0,a,r,sum=0;
    cout<<"Enter number :";
    cin>>n;
    a=n;
    while(a!=0)
    {
       a/=10;
       ++count;
    }
    a=n;
    while(a!=0)
    {
        r=a%10;
        sum+=round(pow(r,count)); // pow() returns a double value
                                  // round() returns the equivalent int
        a/=10;

    }
    if(n==sum)
    {
        cout<<n<<" is a amstrong number\n";
    }
    else{
        cout<<n<<" is not a amstrong number";
    }
    return 0;
}