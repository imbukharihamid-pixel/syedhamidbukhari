#include<iostream>
using namespace std;
 void add(int number1 , int number2);

 int main(){
   int number1 , number2;
   cout<<"ENTER FIRST NUMBER";
   cin>>number1;
   cout<<"ENTER SECOND NUMBER";
   cin>> number2;
    
   add(number1, number2);
   return 0;
 }
 void add(int number1 ,int number2){
    cout <<"The SUM IS :" << number1+number2;

 }