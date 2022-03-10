/* Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. 
In order to achieve this the height of each of the friends should not exceed h.
If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard.
The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. 
Friends want to talk to each other while walking, so they would like to walk in a single row.
What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?*/

#include<iostream>
using namespace std;

int main()
{
    int n,height,fence_height, width=0; 
    cin>>n>>fence_height;          //number of input,height of fence
    for (int i=0;i<n;i++)
    {
    cin>>height;
        if (height<=fence_height)  //chkng if height of person is less than or equal to fence height, width couted as 1
        width +=1;
        else 
        width +=2;                // else width counted as 2
    }  
    cout<<""<<width;              // final width of a road.
}   