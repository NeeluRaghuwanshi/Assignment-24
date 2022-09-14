//functions using function overloading to add two numbers having different data
//types.
#include <iostream>
using namespace std;
int add(int,int);
float add(float,float);
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two integer type number ";
    cin>>a>>b;
    cout<<" Sum is "<<add((int)a,(int)b)<<endl;
    cout << "Enter two float type number ";
    cin >>a>>b;
    cout << "Sum is "<< add(a,b)<<endl;
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
float add(float a, float b)
{
    return a+b;
}
