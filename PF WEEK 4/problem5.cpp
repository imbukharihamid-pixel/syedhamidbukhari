#include<iostream>
using namespace std;
main()
{
    int holiday,workingday,time,difference;
    cout<<"enter holidays:";
    cin>>holiday;
    workingday=365-holiday;
    time=(workingday*63+holiday*127);
    difference=30000-time;
    if(difference<=30000)
    {
    cout<<"tom sleeps well:"<<difference;
    }
    else
    {
        cout<<"tom will ran away";
    }
}