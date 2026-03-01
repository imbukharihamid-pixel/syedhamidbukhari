#include<iostream>
using namespace std;
main()
{
int num_of_square_meter,width_of_wall,height_of_wall;
int num_of_walls;
cout<<"Number of square meter you can paint : ";
cin>>num_of_square_meter;
cout<<"Enter width of the wall : ";
cin>>width_of_wall;
cout<<"Enter height of the wall : ";
cin>>height_of_wall;
num_of_walls=num_of_square_meter/(width_of_wall*height_of_wall);
cout<<"Number of walls you can paint is : " <<num_of_walls;
}