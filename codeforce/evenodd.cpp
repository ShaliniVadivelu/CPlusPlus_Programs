

/*long int findingNumber(long int n, long int pos)
{
    // creating 2 vector to store the even and odd values separately then concatenate both in the 3rd vec using insert fn
    vector <long int> odd;           // 1,3,5,7,9       
    vector <long int> even;          //2,4,6,8
    vector <long int> vec;
    for (int i=1;i<=n;i++)
    {
        if (i % 2 != 0)
        odd.push_back(i);
        
        else
        even.push_back(i);
    }

    vec.insert(vec.begin(), odd.begin(),odd.end());
    vec.insert(vec.end(), even.begin(),even.end());   // 1,3,5,7,9,2,4,6,8

    // printing the value mentioned in the index
    return vec.at(pos-1);
}

int main () 
{
    long int first_n_num, pos_num_print;
    cin>>first_n_num>>pos_num_print;

    cout<<findingNumber(first_n_num,pos_num_print );           // calling the findingnumber function with n and index
}

//input: 10 3
//output: 5
*/
#include<iostream>
using namespace std;

int main ()
{
 long int n, index, mid, answer;
 cin>>n>>index;


 for (int i=1;i<=n;i++)
 {
     {
     if (n%2==0)              
         mid =n/2;
     else
         mid=(n+1)/2;
     }

     if (index<=mid)
     {
         answer=1+(index-1)*2;
     }
     else
     {
         answer=(index-mid)*2;
     }

 }

 cout<<answer;

}
