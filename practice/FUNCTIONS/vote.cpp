//A person is eligible to vote if his/her age is greater than or equal to 18. Define a method to find out if he/she is eligible to vote.
#include<iostream>
using namespace std;

int vote(int age)
{
    if(age>=18)
    {
        cout<<"You are eligible for voting ";
   
    }
    else{
        cout<<"You are not eligible for voting ";
    }
         return 0;
}

int main()
{
    int age;
    cout<<"Enter age :";cin>>age;
    vote(age);
    return 0;
}