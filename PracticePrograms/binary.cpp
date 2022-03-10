#include<iostream>
using namespace std;

int binarySearch(int arr[],int x,int left,int right)
{
    int mid;
    while (left<right)
    { 
        mid =(left+right)/2;
        if (arr[mid]==x)
        return mid;
        else if (arr[mid]>x)
        return binarySearch(arr,x,left,mid-1);
        else
        return binarySearch(arr,x,mid+1,right);
    }
return -1;
}

int main ()
{
    int n,left=0,right=n-1,x,location;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the element to find its location: ";
    cin>>x;

    location= binarySearch(arr,x,0,n-1);

    (location==-1) ? cout<<"Element not found" : cout<<"Element is found at location: "<<location;   
    cout<<"\n";
}
//time complexity is O(logn) in worst case; we keep dividing the array in half and try to search the element;
// O(1) in best case; element found in the 1st attemp itself;