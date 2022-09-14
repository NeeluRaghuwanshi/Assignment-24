//function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int x;
    cout<<"Enter a number ";
    cin>>x;
     if( prime(x)== 0)
         cout<<"Number is Prime";
     else
          cout<<"Not Prime";
    return 0;
}
int prime(int x)
{
   int flag=0;
   for(int i=2 ; i<=x/2 ; i++)
   {
        if(x%i == 0)
            flag=1;
   }
   return flag;
}


