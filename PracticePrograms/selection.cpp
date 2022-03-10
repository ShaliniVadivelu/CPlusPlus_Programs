#include<iostream>
using namespace std;

void selectionSrt(int a[],int n)
{
   int small,temp;
    for (int i=0;i<n-1;i++)
    {
        small=i;
        for (int j=i+1;j<n;j++)
        {
        if (a[j] < a[small])
            small=j;
        }
        if (small !=i)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        swap(a[i],a[small]); 

           /* temp=a[small];
            a[small]=a[i];
            a[i]=temp; */
    }
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++)
    cout<<" "<<a[i];

    cout<<"\n";
}

int main ()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];             //array initialization

    cout<<"Enter "<<n<<" numbers to get sorted: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    selectionSort(arr,n);       //call function by passing an array as argument
    return 0;
}