//function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
   int x,y;
   cout<<"Enter two number ";
   cin>>x>>y;
   swap(x,y);
   cout<<"Number after swaping are : "<<x <<" and "<<y;
   return 0;
}
void swap(int&x,int&y)
{
   x=x+y;
   y=x-y;
   x=x-y;
}
