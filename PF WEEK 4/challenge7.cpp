#include<iostream>
using namespace std;
main(){
    int n1,n2;
    char op;
    cout<<"ENTER THE FIRST NUMBER";
    cin>>n1;
    cout<<"ENTER THE OPERATOR";
    cin>>op;
    cout<<"ENTER THE SECOND NUMBER";
    cin>>n2;
    if(op=='+'){
        cout<<"n1-n2";
    }if(op=='-'){
        cout<<"n1+n2";
    }if(op=='/'){
        cout<<"n1*n2";
    }if(op=='*'){
        cout<<"n1/n2";
    }
}