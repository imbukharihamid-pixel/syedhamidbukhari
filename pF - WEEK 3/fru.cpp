#include<iostream>
using namespace std;

int main() 
{
 float Price_per_kg_veg, Price_per_kg_fru, total_veg_kg, total_fru_kg;
 float total_num_coin_veg , total_num_coin_fru;
float total_num_coin,total_rup;
 cout<<"Enter Vegetables price per kilogram (in coin) : ";
 cin>>Price_per_kg_veg;

 cout<<"Enter Fruit price per kilogram (in coin) : ";
 cin>>Price_per_kg_fru;

 cout<<"Enter total kilogram of vegetables : ";
 cin>>total_veg_kg;

 cout<<"Enter total kilogram of fruits : ";
 cin>>total_fru_kg;

 total_num_coin_veg = Price_per_kg_veg * total_veg_kg;
 total_num_coin_fru = Price_per_kg_fru * total_fru_kg;

 total_num_coin = total_num_coin_veg + total_num_coin_fru;
 
 total_rup = total_num_coin / 1.94;
 cout<<"Total earnings in rupees (Rps) : "<<total_rup;


 return 0; 
}
