//overloaded functions to calculate area of circle, area of rectangle and triangle.
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float,float);
int main()
{
 int r,l,w,h,b;
 cout<<"Enter radius ";
 cin>>r;
 cout<<"Area of circle is "<<area(r)<<endl;
 cout<<"Enter length and breadth ";
 cin>>l>>w;
 cout<<"Area of rectangle is "<<area(l,w)<<endl;
 cout<<"Enter base and height ";
 cin>>b>>h;
 cout<<"Area of triangle is "<<area(b,h)<<endl;
 return 0;
}
int area(int r)
{
  return 3.14*r*r;
}
int area(int l,int w)
{
  return l*w;
}
float area(float b,float h)
{
  return ((b * h) / 2.0);
}
