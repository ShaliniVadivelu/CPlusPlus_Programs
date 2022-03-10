#include<iostream>
using namespace std;

int main()                                   
{
   double shalini [5]; 

   cout<<"enter a number";
   for (int i=0;i<5;i++)
   cin>>shalini[i];
   
    for (int i=0;i<5;i++)
   {
       if (shalini[0] < shalini[i+1])
       shalini[0]=shalini[i+1];
   }
   cout<<"larget of number:"<<shalini[0];
    
} 