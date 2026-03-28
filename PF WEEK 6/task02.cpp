/*Write a C++ program that takes n numbers from the user, stores them in an array,
and passes the array to a function that counts and prints how many numbers are
even.*/
#include<iostream>
using namespace std;
main(){
int i,even=0;
cout<<"ENTER NUMBERS YOU WANT TO PRINT";
cin>>i;
int array[i];
cout<<"ENTER"<<i <<"numbers";
for(int idx=0;idx<i;idx++){
    cin>>array[idx];
    if(array[idx]%2==0){
        even=even+1;
    }

    }
    cout<<"TOTAL EVEN NUMBERS ARE" <<even;
}

