
#include<iostream>
using namespace std;

int main ()
{
    string s1, s2;
    int x, y, m_len_string;
    cin>>s1>>s2;
    
    if (s1 == s2)
    {
        cout<<"-1";
    }
    else
    {
        x=s1.size(), y=s2.size();
        m_len_string = max(x, y);
        cout<<m_len_string;
    }
    
} 


