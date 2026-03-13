#include<iostream>
using namespace std;
main(){
    string my_pass,your_pass;
    my_pass = "hamid@123" ;
    cout<<"ENTER YOUR PASSWORD";
    cin>>your_pass;
    
    if(my_pass==your_pass){
     cout<<"CONGRATS YOU HAVE CRACKED THE PASSWORD";}
        else{
            cout<<"TRY AGAIN";
        }
    
}