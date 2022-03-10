#include<iostream>
#include<map>
using namespace std;

int main()
{
    int q,type,mark;
    string name;47
    cin>>q;

    map<string, int>m;

    for(int i=0;i<q;i++)
    {
        cin>>type;
        {
            switch (type)
            {
                case 1:
                cin>>name>>mark;
                m[name]+=mark;
                break;
                case 2:
                cin>>name;
                m.erase(name);
                break;
                case 3:
                cin>>name;
                map<string,int>:: iterator itr=m.find(name);
                if(itr==m.end())
                    cout<<"0"<<"\n";
                    else
                    cout<<itr->second<<"\n";
                    break;
            }
        }
    }
}