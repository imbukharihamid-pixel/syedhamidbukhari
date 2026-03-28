#include<iostream>
using namespace std;
int main(){

    int stuno;
    cout<<"Enter number of students: ";cin>>stuno;
    string array[stuno];
    cout<<"Enter names of "<<stuno<<" students: \n";
    for (int idx = 0; idx < stuno; idx++)
    {
        cin>>array[idx];
    }

    for (int i=0;i<stuno-1;i++)
    {
        for (int j = i+1; j < stuno; j++)
        {
            if(array[i]>array[j])
            {
                string temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout<<"Student names in alphabetic order:\n";
    for(int i = 0; i < stuno; i++)
    {
        cout<<array[i]<<" \n";
    }
    return 0;
}