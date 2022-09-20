//11. Compound Interest 
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   
    float pri,amt, rate,time;
    cout<<"Enter principal amount :";cin>>pri;
    cout<<"Enter rate of interest :";cin>>rate;
    cout<<"Enter time :";cin>>time;
    
    amt=pri*(pow((1+(rate/100)),time));
    cout<<"Compund interest is :"<<amt-pri;
    

    return 0;
}