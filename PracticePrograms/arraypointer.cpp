#include<iostream>
using namespace std;

int main()                                   
{
   double shalini [5]; 

   cout<<"enter a number";
   for (int i=0;i<5;i++)
   cin>>shalini[i];
   
  cout<<"number are: ";
   for (int i=0;i<5;i++)
  cout<<"\t"<<*(shalini+i);
    
} 