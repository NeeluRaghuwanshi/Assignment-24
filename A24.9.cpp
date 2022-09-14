//functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include <iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int n1, n2;
    cout<<"Enter two integer number ";
    cin>>n1>>n2;
    cout<<"Maximum number is  "<<max(n1,n2)<<endl;
    float f1,f2;
    cout<<"Enter two float type number ";
    cin>>f1>>f2;
    cout<<"Maximum number is  "<< max(f1,f2) << endl;
    return 0;
}
int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}
float max(float f1, float f2)
{
    return f1 > f2 ? f1 : f2;
}
