#include<iostream>
using namespace std;
main(){

    int numbers[5];
    for(int count =0; count<5 ; count=count+1){
        cout<<"ENTER NUMBER";
        cin>>numbers[count];
    }
    cout<<"THE FIRST ELEMENT OF ARRAY IS :"<<numbers[0];
    cout<<"THE LAST ELEMENT OF ARRAY IS :"<<numbers[4];
}