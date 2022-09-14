//function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highest(int);
int main()
{
    int x;
    cout<<"Enter a number ";
    cin>>x;
    cout<<"Highest digit in the given number is "<<highest(x);
    return 0;
}
int highest(int x)
{
   int h= -1;
   while(x)
   {
     if(h<x%10)
        h=x%10;
        x=x/10;
   }
   return h;
}


