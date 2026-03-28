
#include<iostream>
using namespace std;
int main()
{
    int elements,largest,smallest;
    cout<<"Enter number of elements: ";
    cin>>elements;
    int array[elements];
    cout<<"Enter "<<elements<<" numbers: \n";
    cin>>array[0];
    largest=array[0];
    smallest=array[0];
    for (int idx=1;idx<elements;idx++)
    {
        cin>>array[idx];
        if (array[idx]>largest)
        {
            largest=array[idx];
        }
        if (array[idx]<smallest)
        {
            smallest=array[idx];
        }
    }
    cout<<"largest number: "<<largest<<endl;
    cout<<"smallest number: "<<smallest<<endl;
    
}