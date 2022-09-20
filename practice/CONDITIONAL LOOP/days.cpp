//Kunal is allowed to go out with his friends only on the even days of a given month. Write a program to count the number of days he can go out in the month of August.
#include<iostream>
using namespace std;

int main()
{
    int count=0;
    for(int i=1;i<=31;i++)
    {
        if(i%2==0)
        {
            count++;
        }

    }
    cout<<"The no. of days Kunal goes out is :"<<count;


    return 0;
}

