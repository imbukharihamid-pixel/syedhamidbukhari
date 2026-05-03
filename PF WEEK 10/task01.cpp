#include<iostream>
using namespace std;

void add(int number1, int number2);
int main(){

    int number1 , number2;
    cout<<"ENTER NUMBER 1";
    cin>> number1;
    cout<<"ENTER NUMBER 2" ;
    cin>> number2;
    add(number1 , number2);

    return 0;

}

void add(int number1, int number2){
    cout<< "SUM :" << number1 + number2;
}
