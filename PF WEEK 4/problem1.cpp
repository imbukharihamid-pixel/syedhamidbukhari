#include<iostream>
using namespace std;
main()
{
string country;
float price,discount;
int discounted_price;cout<<"enter country name:";
cin>>country;
cout<<"enter ticket price in dollars:";
cin>>price;
if(country=="ireland")
{
    discount=price*0.10;
}
else
{
    discount=price*0.05;
}
 discounted_price=price-discount;
cout<<"discounted price is:"<<discounted_price;
}