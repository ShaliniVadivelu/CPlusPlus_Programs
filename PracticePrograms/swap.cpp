#include<iostream>
using namespace std;

int main ()
{
    int x,y,temp;
    cout<<"Enter 2 variable:";
    cin>>x>>y;
    cout <<"Before swapping "<<"x: "<<x<<" y: "<<y;

    temp=x;
    x=y;
    y=temp;
    cout <<"\nAfter swapping "<<"x: "<<x<<" y: "<<y<<"\n";
}