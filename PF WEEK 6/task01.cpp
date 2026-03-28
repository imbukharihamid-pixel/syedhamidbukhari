#include<iostream>
using namespace std;
main(){

    int i,sum=0;
    cout<<"ENTER THE NUMBER OF ELEMENTS";
    cin>>i;
    int array[i];
    cout<<"ENTER "<<i<<"numbers :";
    for(int x=0;x<i;x++){
        cin>>array[x];
        sum = sum+array[x];

    }
    cout<<"SUM OF ALL ELEMENTS"<<sum;
}