//Challenge#2:
//Find the frequency of a digit in a number.
//Test Cases:
//frequencyChecker(566960, 6) 3
//frequencyChecker(566960, 5) 1
#include<iostream>
using namespace std;
int main(){
    int n,d,f=0;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter digit: ";
    cin>>d;
    while(n>0){
        if(n%10==d) f++;
        n/=10;
    }
    cout<<"Frequency of "<<d<<" is "<<f;
    return 0;
}