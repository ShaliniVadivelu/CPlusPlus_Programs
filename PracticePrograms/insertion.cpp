#include<iostream>
using namespace std;

int sort (int a[],int n)
{
    int j,temp;                     //temp as string      
for (int i=1;i<n;i++)
{
temp=a[i];
j=i-1;
{
while (j>=0 && a[j]>temp)      // for descending insertion use "<" instead of ">"
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
}
 cout<<" Sorted array: ";
    for (int i=0;i<n;i++)
    cout<<" "<<a[i];

    cout<<"\n";
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];                    //to sort a string need to declare array as string.
    
    cout<<"list of numbers to be sorted:";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    sort (arr,n);                   // passed array as argument
    return 0;
    
}