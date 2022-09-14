//function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int x,y;
    cout<<"Enter a number and its power ";
    cin>>x>>y;
    cout<<x<<" power "<<y<<" is "<<power(x,y);
    return 0;
}
int power(int x,int y)
{
   int n=1;
   while(y--)
   {
     n=n*x;
   }
   return n;
}


