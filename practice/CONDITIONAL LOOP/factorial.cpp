#include<iostream>
using namespace std;
int fac(int n)
{
   
    if(n==0 || n==1)
   {
    return 1;
   }
   else{
     return n*fac(n-1);
   }
}
int main()
{
    int num;
   cout<<"Enter number :";
   cin>>num;
   cout<<fac(num);

    return 0;
}