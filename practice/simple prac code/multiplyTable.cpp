//Take a number as input and print the multiplication table for it.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. whose table you want to print :";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" X "<<i<<" = "<<(n*i);
        cout<<endl;
    }
    return 0;
}