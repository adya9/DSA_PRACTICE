#include<iostream>
using namespace std;

int main()
{
    int n,cost;
   
    cout<<"If no. of unit consumed is less than or equal to 200 unit then price is calculated Rs. 5 per unit \n";
    cout<<"If no. of unit consumed is more than 200 unit then price is calculated Rs. 7 per unit \n";
    cout<<"Enter no. of unit consumed :";
    cin>>n;
    if(n>200)
    {
        cost=n*7;
        cout<<"Electricity bill is Rs."<<cost;
    }
    else{
        cost=n*5;
        cout<<"Electricity bill is Rs."<<cost;
    }
    return 0;
}