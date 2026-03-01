#include<iostream>
using namespace std;

main() {
int size_of_bag,cost_of_bag ,area_covered_by_bag;
cout<< "Enter the size of fertilizer bag in pounds";
cin>>size_of_bag;
cout<<"Enter the cost of bag";
cin>>cost_of_bag;
cout<<"enter the area covered by bag";
cin>>area_covered_by_bag;
int cfpp;
int cfps;
cfpp=cost_of_bag/size_of_bag;
cfps=area_covered_by_bag/cost_of_bag;
cout<<"cost of fertilzer per pound :" <<cfpp<<endl;
cout<<"cost of fertilzer per square feet :" <<cfps;

 

}