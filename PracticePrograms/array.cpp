#include<iostream>
using namespace std;

 /* int main()                                   // addition of 2D arry matrix
{
double shalini [2][2],srirama[2][2], sum[2][2];

cout<<"enter a number for 1st matrix";
for (int i=0;i<2;i++)
{
   for (int j=0;j<2;j++)
   cin>> shalini[i][j];
}

cout<<"enter a number for 2nd matrix";
for (int i=0;i<2;i++)
{
   for (int j=0;j<2;j++)
   cin>> srirama[i][j];
}

cout<<"1st matrix:";
for (int i=0;i<2;i++)
{
   for (int j=0;j<2;j++)
   cout << "shalini [" << i << "] [" << j << "]:" << shalini[i][j]<<"\n";
}

cout<<"2nd matrix:";
for (int i=0;i<2;i++)
{
   for (int j=0;j<2;j++)
   cout << "srirama [" << i << "] [" << j << "]:" << shalini[i][j]<<"\n";
}

for (int i=0;i<2;i++)
   for (int j=0;j<2;j++)
   sum [i][j]= shalini[i][j] +srirama [i][j];

   cout<<"sum of 2 matrix:\n";
for (int i=0;i<2;i++)
   for (int j=0;j<2;j++)
      cout<<" "<< sum[i][j];
}

*/

/*int main()                                // 2D array ; printing 2d array
{
double shalini [2][3];

cout<<"enter a number";
for (int i=0;i<2;i++)
{
   for (int j=0;j<3;j++)
   cin>> shalini[i][j];
}

cout<<"the numbers are:";
for (int i=0;i<2;i++)
{
   for (int j=0;j<3;j++)
   cout << "shalini[" << i << "][" << j << "]:" << shalini[i][j]<<"\n";
}
}*/

/*int main()                                // print elements in array
{
   int shalini[5]={2,4,6,8,10}; //declaring the array

cout<<"numbers are:\n";
for (const int &n:shalini) // (for int i=0;i<=4;i++)
cout<<"\n"<<n;
}*/

int main()                                   // addition and average of array elements
{
   double shalini [5]; 
   float sum=0, average;

   cout<<"enter a number";
   for (int i=0;i<5;i++)
   cin>>shalini[i];

   for (int i=0;i<5;i++)
   sum += shalini[i];
   cout<<"sum of number"<<sum<<"\n";

   average= sum/5;
   cout<<"average of number: "<<average<<"\n";

} 