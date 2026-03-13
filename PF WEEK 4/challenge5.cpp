#include <iostream>
using namespace std;
main()
{
    int bill,discount;
    cout<<"enter bill";
    cin>>bill;
    cout<<"enter discount bill";
    cin>>discount;
if (bill<=5000)
{ 
  discount= bill-(bill*0.05); 
  cout<<"5% discount";   /* code */
}
else 
{
   discount= bill-(bill*0.01);
    cout<<"10% discount";
}
cout<<"your discount bill is:"<<discount;
}