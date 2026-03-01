#include<iostream>
using namespace std;

main() {
string name ;
int adult_ticket_price,child_ticket_price,num_of_adult_ticket_sold,num_of_child_ticket_sold,percentage_donate_to_charity,total_money;
float per_charity;
cout<<"ENTER NAME OF MOVIE";
cin>>name;
cout<<"PRICE OF ADULT TICKET";
cin>>adult_ticket_price;
cout<<"PRICE OF CHILD TICKET";
cin>>child_ticket_price;
cout<<"ADULT TICKET SOLD";
cin>>num_of_adult_ticket_sold;
cout<<"CHILDRENS TICKET SOLD";
cin>>num_of_child_ticket_sold;
cout<<"PERCENTAGE DONATE TO CHARITY";
cin>>percentage_donate_to_charity;
total_money=(adult_ticket_price*num_of_adult_ticket_sold)+(child_ticket_price*num_of_child_ticket_sold);
cout<<"TOTAL MONEY is " <<total_money;
per_charity= (total_money/100)*percentage_donate_to_charity;
cout<<endl;
cout<<"PERCENTAGE DONATED TO CHARITY IS " <<per_charity;
}