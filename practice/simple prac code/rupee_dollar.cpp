//Input currency in rupees and output in USD.
#include<iostream>
using namespace std;

int main()
{
    float rup,dol;
    cout<<"Enter indian rupee :";
    cin>>rup;
    dol=rup/79.66;
    cout<<"its value in dollar :"<<dol;
    return 0;
}