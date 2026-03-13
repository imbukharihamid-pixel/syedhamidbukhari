#include<iostream>
using namespace std;
main(){
    int t1,t2;
    cout<<"ENTER THE FIRST TEMPERATURE";
    cin>>t1;
    cout<<"ENTER THE SECOND TEMPERATURE";
    cin>>t2;
    if(t1-t2 > 10){
        cout<<"DIFFERENCE IS too BIG ";
    }else{
        cout<<"PROGRAMS END";
    }
} 