//c++ Program Vowel Or Consonant
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char le,l;
    cout<<"Enter the alphabet :";cin>>le;
    l=tolower(le);
    if(isalpha(le)==0)
    {
        cout<<"Given input is not AN ALPHABET .";
    }
    else
    {
        if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
        {
            cout<<le<<" is a vowel";
        }
        else{
        cout<<le<<" is a consonant";
        }

    }
    

    return 0;
}