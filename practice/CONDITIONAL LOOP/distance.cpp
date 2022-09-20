#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter coordinate 1 value :\n";
    cout<<"x1 :";cin>>x1;
    cout<<"y1 :";cin>>y1;
    cout<<"Enter coordinate 2 value :\n";
    cout<<"x2 :";cin>>x2;
    cout<<"y2 :";cin>>y2;
    
    cout<<"Distance formula is sqrt[(x2-x1)^2 +(y2-y1)^2] \n";
    cout<<"Distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is :";
    cout<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    return 0;
}