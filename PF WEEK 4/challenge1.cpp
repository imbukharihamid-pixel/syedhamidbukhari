#include<iostream>
using namespace std;
main(){
    int num,even;
    cout<<"ENTER YOUR NUMBER";
    cin>>num;
    even = num%2;
    if(even == 0){
        cout <<"YOUR NUM IS EVEN";
    } else {
        cout<<"YOUR NUM IS ODD";
    }
 
}