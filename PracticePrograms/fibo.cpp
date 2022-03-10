#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1;
    int nexterm;

    cout<<"enter a number to print the fibo series upto that"; 
    cin>>n;
    cout<<"fibonacci series :\n"<< t1 << "\n"<< t2  ;

    nexterm=t1+t2;
    while (nexterm<=n)
    {
    cout <<" \n" << nexterm;
    t1=t2;
    t2=nexterm;
    nexterm=t1+t2;
    }
} 
