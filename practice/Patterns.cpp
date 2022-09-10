#include<iostream>
using namespace std;
/// @brief 
/// @return 
int main()
{
    int n,i,j;
    cout<<"enter value of n";
    cin>>n;
    /*
1.  *****
    *****
    *****
    *****
    *****
    */
   cout<<"\npattern no. 1 \n";
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
   }
/*
2.  *
    **
    ***
    ****
    *****
*/
    cout<<"\npattern no. 2 \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<"\n";
    }
/*
3.  *****
    ****
    ***
    **
    *
*/
    cout<<"\npattern no. 3 \n";
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

/*
4.  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/
    cout<<"\npattern no. 4 \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

/*
5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
    cout<<"\npattern no. 5 \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

/*
6.       *
        **
       ***
      ****
     *****
*/
    cout<<"\npattern no. 6 \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
/*
7.   *****
      ****
       ***
        **
         *
*/
    cout<<"\npattern no. 7 \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j-i<=-1)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
/*
8.      *
       ***
      *****
     *******
    *********
*/
    cout<<"\npattern no. 8 \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }   
        cout<<"\n";                      
    }    
    
/*
9.  *********
     *******
      *****
       ***
        *
*/
    cout<<"\npattern no. 9\n";
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

/*
10.      *
        * *
       * * *
      * * * *
     * * * * *
*/
    cout<<"\npattern no. 10\n";    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }   
        cout<<"\n";                      
    }              
  
/*
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/
    cout<<"\npattern no. 11\n";  
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i-1)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
/*
12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
*/
    cout<<"\npattern no. 12\n"; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    } 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
/*
13.      *
        * *
       *   *
      *     *
     *********
*/
    cout<<"\npattern no. 13\n"; 
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j==(n-(i-1))||j==(n+(i-1)))
            {
                cout<<"*";
            }
          
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=1;i<=2*n-1;i++)
    {
        cout<<"*";
    }
/*
14.  *********
      *     *
       *   *
        * *
         *

*/
    cout<<"\npattern no. 14\n"; 
    for(i=1;i<=(2*n-1);i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<(2*n-1);j++)
        {
            if(j==n-(i-1)||j==n+(i-1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
/*
15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *
*/
    cout<<"\npattern no. 15\n"; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j==(n-(i-1))||j==(n+(i-1)))
            {
                cout<<"*";
            }
          
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<(2*n-1);j++)
        {
            if(j==n-(i-1)||j==n+(i-1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
/*
16.           1
            1   1   not complete 
          1   2   1
        1   3   3   1
      1   4   6   4   1

*/
    cout<<"\npattern no. 16\n";  
    int coef=1;
    for(i=0;i<n;i++)
    {
        for(int l=0;l<n;l++)
        {
            if(l<n-i)
            {
                cout<<" ";
            }
        }
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
            {
               coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;
            }
          cout<<coef<<" ";
        }   
        cout<<"\n";                      
    }              
/*
17.      1
        212
       32123
      4321234
     543212345
      4321234
       32123
        212
         1
*/
    cout<<"\npattern no. 17\n"; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                if(n-j+1<1)
                {
                    cout<<j+1-n;
                }
                else{
                    cout<<n-j+1;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                if(n-j+1<1)
                {
                    cout<<j+1-n;
                }
                else{
                    cout<<n-j+1;
                }
            }
            else{
                cout<<" ";
            }
        } 
           cout<<endl;
    }
        
    
/*
18.   **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********
*/
    cout<<"\npattern no. 18\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j>(n-i+1)&&j<(2*n-n+i))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
   
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j>i && j<(2*n-i+1))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
    

/*
19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *
*/
    cout<<"\npattern no. 19\n"; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j>i&&j<(2*n-i+1))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    } 
    for(i=1;i<n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
             if(j>(n-i) && j<=(2*n-n+i))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
/*
20.    ****
       *  *   
       *  *
       *  *
       ****
*/
    cout<<"\npattern no. 20\n"; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if((j>1 && j<n-1)&&(i!=1 && i!=n))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

/*
21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
*/
    cout<<"\npattern no. 21\n"; 
    int num=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

/*
22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1

*/
    cout<<"\npattern no. 22\n";
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<(j%2)<<" ";
        }
        cout<<endl;
    }

/*
23.        *      *
         *   *  *   *
       *      *      *
*/
    
/*
25.       *****
         *   *
        *   *
       *   *
      *****
*/
    cout<<"\npattern no. 25\n";
    for(i=1;i<=n;i++)
    { 
        for(int k=1;k<=n;k++)
        {
            if(k<=(n-i))
            {
                cout<<" ";
            }
        }
         
        for(j=1;j<=n;j++)
        {
            if((j>1 && j<n)&&(i!=1 && i!=n))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
            
            
        }
        cout<<endl;
    }
/*
26.   1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6
*/
    cout<<"\npattern no. 26\n";
    for(i=1;i<=n+1;i++)
    {
        for(j=n+1;j>=1;j--)
        {
            if(j>=i)
            {
               cout<<i;
            }
        }
        cout<<endl;
    }
/*
28.      *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/
    cout<<"\npattern no. 28\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }

        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i-1)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
/*
30.         1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
*/  
    cout<<"\npattern no. 30\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                if(n-j+1<1)
                {
                    cout<<j+1-n;
                }
                else{
                    cout<<n-j+1;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
/*
32.    E
       D E
       C D E
       B C D E
       A B C D E
*/
    cout<<"\npattern no. 32\n";
    char alpha='F';
    for(i=1;i<=n;i++)
    {
        alpha=alpha-i;
        for(j=0;j<i;j++)
        {
            cout<<alpha<<" ";
             alpha++;
            
        }
        
        cout<<endl;
    }
/*
34.    E D C B A
       D C B A
       C B A
       B A
       A
*/
    cout<<"\npattern no. 34\n";
    char alp='E';
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            
            cout<<alp<<" ";
            alp-=1;

        }
        alp=alp+i-1;
        cout<<endl;
    }

/*
35.    1      1
       12    21
       123  321
       12344321
*/
    cout<<"\npattern no. 35\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j>i && j<2*n-i+1)
            {
                cout<<" ";
            }
            else{
                cout<<j;
            }

        }
        cout<<endl;
    }
      return 0;
}
