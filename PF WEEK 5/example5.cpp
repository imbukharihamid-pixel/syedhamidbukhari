#include<iostream>
using namespace std;
main(){
    int table,multiple;
    cout<<"ENTER THE TABLE YOU WANT TO RPINT";
    cin>>table;
    for(int x=1 ; x<=10; x=x+1){
    multiple = table*x;
    cout<<table<<"x"<<x<<"="<<multiple<<endl;
    }
}