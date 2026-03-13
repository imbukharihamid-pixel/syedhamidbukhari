#include<iostream>
using namespace std;
main()
{
    float a, s,l,w,r,b,h;
    cout<<"enter square side:";
    cin>>s;
    cout<<"enter side of rectangle:";
    cin>>l;
    cout<<"enter width of reactangle:";
    cin>>w;
    cout<<"enter radius of circle:";
    cin>>r;
    cout<<"enter base of triangle:";
    cin>>b;
    cout<<"enter height of triangle:";
    cin>>h;
a=s*s;
cout<<"area of square:"<<a;
a=l*w;
cout<<"area of rectangle:"<<a;
a=3.1416*(r*r);
cout<<"area of circle:"<<a;
a=1/2*(b*h);
cout<<"area of triangle:"<<a;
}