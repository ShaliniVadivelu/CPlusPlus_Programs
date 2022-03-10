#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;


// right angle triangle
    for (int i=0;i<n;i++)
   {
       for (int j=0;j<=i;j++)   
          {
         cout<<"*";
   }
     cout<<"\n";
   } 
// inversion of right angle triangle
    for (int i=0;i<n;i++)  
 {
       for(int j=i;j<n;j++)    
         {
             cout<<"*";
         }
         cout<<"\n";
    } 
//
for (int i=1;i<=n;i++)
{
    for (int j=n-i;j>0;j--)
    {
        cout<<" ";
    }
    for (int k=n-i;k<n;k++)
    { 
        cout<<"*"; 
    }
    cout<<"\n";
}
//
    for (int i=n;i>0;i--)   
{
     for (int j=n-i;j>0;j--)
     {
         cout<<" ";
     }
     for (int k=i;k>0;k--)
     {
         cout<<"*";
     }
     cout<<"\n";
 } 
// pyramid
    for (int i=1;i<=n;i++)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
{
    for (int j=n-i;j>0;j--)
    {
        cout<<" ";
    }
    for (int k=n-i;k<n;k++)
    { 
        cout<<"* "; 
    }
    cout<<"\n";
}
// inversion of pyramid
    for (int i=n;i>0;i--)   
{
     for (int j=n-i;j>0;j--)
     {
         cout<<" ";
     }
     for (int k=i;k>0;k--)
     {
         cout<<"* ";
     }
     cout<<"\n";
 } 
}                                                                   

