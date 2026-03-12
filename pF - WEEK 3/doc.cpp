#include<iostream>
using namespace std;

main() {
string name;
int weight;
int days;
cout<<"ENTER THE NAME : ";
cin>> name;
cout<<"ENTER THE WEIGHT : ";
cin>>weight;
days=15*weight;
cout<<name<<" will need " <<days<<" days to lose  " <<weight<<"kg weight by following the doctor suggestion";
}