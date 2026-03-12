#include<iostream>
using namespace std;

int main() {
int ini_velocity , acceleration, time ,final_velocity;
cout<<"ENTER THE INITIAL VELOCITY : ";
cin>> ini_velocity;
cout <<"ENTER THE ACCELERATION : ";
cin>> acceleration;
cout<<"ENTER THE TIME : ";
cin>> time;
final_velocity=acceleration*time+ini_velocity;
cout<<"FINAL VELOCITY IS = " <<final_velocity;


}