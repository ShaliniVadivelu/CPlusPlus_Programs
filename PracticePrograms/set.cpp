#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,type,value;
    cin>>n;
    set<int>s;
    set<int>:: iterator itr;

    for (int i=0;i<n;i++)
    {
        cin>>type;
        cin>>value;
        {
        switch (type)
        {
            case 1:
            {
            s.insert(value);
            break;
            }
            case 2:
            {
                itr=s.find(value);
            {
                if(itr!=s.end())
                    s.erase(value);
            }
            break;
            }
            case 3:
            {
                itr=s.find(value);
                {
                    if(itr!=s.end())
                        cout<<"Yes";
                    else
                        cout<<"No";
                }
                    break;
            }
        }
    }

}

}