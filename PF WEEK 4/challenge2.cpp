#include<iostream>
using namespace std;
main(){
    int num1,num2;
    cout<<"PLEASE ENTER YOUR 1ST NUMBER";
    cin>>num1;
    cout<<"PLEASE ENTER YOUR 2ND NUMBER";
    cin>>num2;
    if(num1 > num2){
        cout<<"NUMBER " <<num1 <<"is greater than" <<num2;
    } else {
        cout<<"NUMBER" <<num2 <<" is greater than " <<num1;
    }
}