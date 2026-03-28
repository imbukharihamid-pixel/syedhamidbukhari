#include<iostream>
using namespace std;
main(){

    
    string array[5];
    cout<<"Enter names of 5 students: \n";
    for (int x=0;x<5;x++)
    {
        cin>>array[x];
    }
    cout<<"Student names are: \n";
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<": "<<array[i]<<endl;
    }
    
}