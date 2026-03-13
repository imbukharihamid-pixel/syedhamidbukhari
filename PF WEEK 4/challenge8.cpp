#include<iostream>
using namespace std;
main(){
    char ch;
    cout<<"ENTER THE CHARACTER";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u'){
        cout<<"YOUR CHARACTER IS VOWEL";
    }else{
        cout<<"YOUR CHARACTER IS CONSONENT";
    }if(ch=='99999999999999999999999999999'){
        cout<<"YOUR CHARACTER IS A NUMBER";
    }
}