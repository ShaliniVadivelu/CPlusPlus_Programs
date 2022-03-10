#include<iostream>
using namespace std;

int main ()
{
    int n, anton=0, danik=0;
    char win;

    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>win;
        if (win =='A')
        anton +=1;
        else
        danik +=1;        
    }

    if (anton>danik)
    cout<<"Anton";
    else if (anton<danik)
    cout<<"Danik";
    else
    cout<<"Friendship";
} 
