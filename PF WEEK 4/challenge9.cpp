#include<iostream>
using namespace std;
main(){
    string n1,n2,n3;
    int a1,a2,a3;
    cout<<"ENTER THE FIRST BROTHER NAME";
    cin>>n1;
    cout<<"ENTER THE SECOND BROTHER NAME";
    cin>>n2;
    cout<<"ENTER THE THIRD BROTHERS NAME";
    cin>>n3;
    cout<<"ENTER THE FIRST BROTHERS AGE"; 
    cin>>a1;
    cout<<"ENTER THE SECOND BROTHERS AGE";
    cin>>a2;
    cout<<"ENTER THE THIRDS BROTHERS AGE";
    cin>>a3;
    if(a1>a2){
        cout<<"YOUNGEST BROTHER IS" <<n2;
    }if(a1>a3){
        cout<<"YOUNGEST BROTHER IS "<<n3;
    }if(a2>a1){
        cout<<"YOUNGEST BROTHER IS "<<n1;
    }if(a2>a3){
        cout<<"YOUNGEST BROTHER IS"<<n3;
    }if(a3>a1){
        cout<<"YOUNGEST BROTHER IS "<<n1;
    }if(a3>a2){
        cout<<"YOUNGEST BBROTHER IS"<<n2;
    }

}