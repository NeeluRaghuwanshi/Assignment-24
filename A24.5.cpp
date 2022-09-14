//function to check whether a given number is a term in a Fibonacci series.
#include<stdio.h>
#include<iostream>
using namespace std;
void nfib(int);
int main()
   {
     int n;
     cout<<"Enter a number ";
     cin>>n;
     cout<<endl;
     nfib(n);
     return 0;

   }
void nfib(int n)
   {
      int i,x=0,y=1,f;
        if(n==x || n==y)
            cout<<n<<" is in fibonacci series"<<endl;
       f=x+y;
          while(f<n)
          {
            x=y;
            y=f;
            f=x+y;

          }
             if(f == n)
                cout<<n<<" is in fibonacci series ";
            else
                cout<<n<<" is not in fibonacci series ";



   }
