#include<iostream>
using namespace std;
main (){
    int table;
    int multiple;
    cout<<"ENTER TABLE YOU WANT TO PRINT";
    cin>>table;
for(int i =1 ; i<=10;i++){
    multiple=table*i;
    cout<<table<<"*"<<i<<"="<<multiple<<endl;
}
}