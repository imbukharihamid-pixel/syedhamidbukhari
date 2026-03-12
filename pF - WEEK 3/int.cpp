#include<iostream>
using namespace std;
main()
{
int a[5], sum;
cout<<"Enter your values : ";
for(int i = 0 ; i < 5 ; i++) {
cin>>a[i];
}
for(int i = 0 ; i < 5; i++){
sum=sum+a[i];
}
cout<<"The sum is : " <<sum ;
}

