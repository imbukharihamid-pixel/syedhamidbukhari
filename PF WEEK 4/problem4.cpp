#include<iostream>
using namespace std;
main(){
    
    char red,white,tulips;
    float price,discount,finalprice;
    cout<<"enter red roses:";
    cin>>red;
    cout<<"enter white roses:";
    cin>>white;
    cout<<"enter tulips:";
    cin>>tulips;
     price=(red*2)+(white*4.1)+(tulips*2.5);
    cout<<"original price:"<<price;
    if(price>200)
    {
        discount=price*0.20;
        finalprice=price-discount;
}
}