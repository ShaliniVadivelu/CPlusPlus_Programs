#include<iostream>
#include<climits>
using namespace std;

int main ()
{
    int test_case,n;
    int min_skill=INT_MAX;
    cin>>test_case;
    cin>>n;
    int horse[n];
    for (int i=0;i<n;i++)
    {
        cin>>horse[i];
    }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
            if (abs(horse[i]-horse[j])<min_skill)
            min_skill =abs(horse[i]-horse[j]);
            }
        }
        return min_skill;
}
        
