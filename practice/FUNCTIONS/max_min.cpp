//Define two methods to print the maximum and the minimum number respectively among three numbers entered by the user.
#include<iostream>
using namespace std;

int largest(int n1,int n2,int n3)
{
   int max=n1;
   if(n2>max)
   {
    max=n2;
   }
   if(n3>max)
   {
    max=n3;
   }
   return max;
}

int smallest(int n1,int n2,int n3)
{
   int min=n1;
   if(n2<min)
   {
    min=n2;
   }
   if(n3<min)
   {
    min=n3;
   }
   return min;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter number N1 , N2 ,N3 :";
    cin>>n1>>n2>>n3;
    cout<<"Largest number is "<<largest(n1,n2,n3)<<endl;
    cout<<"Smallest number is "<<smallest(n1,n2,n3);
    return 0;
}