#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float number1, number2;
    cout<<"ENTER NUMBER 1";
    cin>> number1;
    cout<<"ENTER NUMBER 2";
    cin>> number2;
    float rad = number2/ 57.2958;
    cout<<"Height: "<<number1 * tan(rad);
}