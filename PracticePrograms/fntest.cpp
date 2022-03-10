#include<iostream>
using namespace std;

int add(int a,int b)
 {
    int sum;
    sum =a+b;
    return (sum);
 }
int main()
{
    int a,b;
    int addition;
    cout<<"enter 2 number";
    cin>>a>>b;
    addition = add (a,b);
    cout<<"sum of 2 num is:"<<addition;
}

