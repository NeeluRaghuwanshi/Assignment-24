//function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
  int a,b,c,s;
  cout<<"Enter two numbers to add ";
  cin>>a>>b;
  s=add(a,b);
  cout<<"sum of two numbers is "<<s<<endl;
  cout<<"Enetr three numbers to add ";
  cin>>a>>b>>c;
  s=add(a,b,c);
  cout<<"sum of three numbers is "<<s<<endl;
  return 0;

}
int add(int a,int b,int c)
{
   return a+b+c;

}
