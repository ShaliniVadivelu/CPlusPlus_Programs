#include<iostream>
using namespace std;

int main()
{
    float x,y,z;
    cout<<"Enter any 3 number: ";
    cin>>x>>y>>z;

    if (x>y && x>z)
        cout<<"x is greater";
    
    else if(y>z)
        cout<<"y is greater";

    else
        cout <<"z is greater";
}