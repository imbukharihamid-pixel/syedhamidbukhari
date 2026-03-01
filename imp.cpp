#include<iostream>
using namespace std;

main() {
int i ,p ;
cout<<"ENTER IMPOSTER COUNT ";
cin>> i;
cout<<"ENTER PLAYER COUNT ";
cin>>p;
int per;
per = 100*(i/p);
cout<<"CHANCE OF BEING IMPOSTER : " <<per;
}