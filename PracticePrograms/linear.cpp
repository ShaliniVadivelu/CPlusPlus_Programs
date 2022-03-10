#include<iostream>
using namespace std;

int linearSearch(int arr[],int x,int n)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int main()
{
    int n,x,location;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the number to find its location";
    cin>>x;

    location=linearSearch(arr,x,n);
    (location==-1) ? cout<<"Element not found" : cout<<"Element is found at location: "<<location;   
    cout<<"\n";
}

//time complexity is O(n); to find a element, we comparing the key element with all the element in an array until it is found.