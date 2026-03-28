#include<iostream>
using namespace std;
 main(){

    int cutno;
    cout<<"Enter number of customers: ";cin>>cutno;
    string array[cutno];
    cout<<"Enter names of "<<cutno<<" customers: ";
    for (int idx=0;idx<cutno;idx++)
    {
        cin>>array[idx];    
    }
    char alphabet;
    int count=0;
    cout<<"Enter the letter to check: ";cin>>alphabet;
    for(int i=0;i<cutno;i++)
    {
        if(array[i][0]==alphabet)
        {
            count+=1;
        }
    }
    cout<<"Total names starting with '"<<alphabet<<"': "<<count;

}