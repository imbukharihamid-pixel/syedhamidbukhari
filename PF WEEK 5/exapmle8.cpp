#include<iostream>
using namespace std;
int main(){
    int value;
    cout<<"PLEASE ENTER A VALUE";
    cin>>value;
    while(value<=0){
        cout<<"ERORR PLEASE ENTER POSITIVE VALUE"<<endl;
        cin>>value;


    }
    cout<<"PROGRAMS END"<<endl;
}