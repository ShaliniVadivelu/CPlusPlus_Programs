#include<iostream>
#include<vector>
using namespace std;                                 

int main()
{
    int n,num,x,a,b;
    cin>>n;

    vector <int> v;
    for (int i=0;i<n;i++)
    {
    cin>>num;
    v.push_back(num);
    }

    cin>>x;
     cin>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    v.size();
     cout<<v.size()<<" "<<"\n";
    for(int i: v)
    {
    cout<<i<<" ";
    }

}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int size,num;
    cin>>size;

    vector <int> v;
    for (int i=0;i<size;i++)
    {
    cin>>num;
    v.push_back(num);
    }

    sort(v.begin(), v.end());
    {
    for (int i:v) 
        cout<<i<<" ";
    }
    return 0;
} 

/* #include<iostream>   //normal ascending order
using namespace std;

int main()
{
    int arr[10];
    int temp;
    cout<<"enter a number for array";
    for (int i=0;i<10;i++)
    cin>>arr[i];
        
    cout<<"original order";
    for (int i=0;i<10;i++)
    cout<<" "<<arr[i];

    for (int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if (arr[i]<arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }

cout<<"\nascending order";
for (int i=0;i<10;i++)
{
cout<<" "<<arr[i];
}
cout<<"\n";
} */



/*#include<iostream>         //normal descending order
using namespace std;

int main()
{
    int arr[10]={5,6,2,7,8,9,10,1,2,3};
    int temp;
    cout<<"original order";
    for (int i=0;i<10;i++)
    cout<<" "<<arr[i];

    for (int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if (arr[j]<arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }

cout<<"\ndescending order";
for (int i=0;i<10;i++)
{
    cout<<" "<<arr[i];
}
cout<<"\n";

} 
*/
#include<iostream>
#include<vector>
using namespace std;

int main ()
{

   vector <int> vec;
   cout<<" "<<vec.size();
    
}
