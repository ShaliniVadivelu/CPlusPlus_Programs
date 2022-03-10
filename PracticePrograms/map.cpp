#include<iostream>
#include<map>
using namespace std;

int main()
{

    int n,mark;
    string name,element;
    cout<<"enter how many count u want";
    cin>>n;
    map<string, int>m;
    
    cout<<"enter a name and mark:\n";
    for (int i=0;i<n;i++)
    {
    cin>>name>>mark;
    m.insert(pair<string, int>(name,mark));
    }
    
   if (m.empty() )
    cout<<"map is empty\n";
    else
    {
    cout<<"Map is not empty\n";
    cout<<"Stored name and mark in map:\n";
    for (map<string,int>::iterator itr=m.begin();itr!=m.end();itr++)  //  for(pair<string, int> print : m)
    cout<<itr->first<<" : "<<itr->second<<"\n";                        // cout<<print.first<<" : "<<print.second<<"\n";
    }
    cout<<"\nsize of map: "<<m.size();

    cout<<"\nenter the element u want to search: ";
    cin>>element;
    auto it=m.find(element) ;
    {
    if (it!=m.end())
     cout<<" "<<it->first<<" : "<<it->second;
     else
     cout<<"not found";
    }
    map<string,int>mm;
    mm.swap(m);
    cout<<"\nafter swapping the element to sec map:\n";
    for (map<string,int>::iterator itr=mm.begin();itr!=mm.end();itr++)  //  for(pair<string, int> print : m)
    cout<<itr->first<<" : "<<itr->second<<"\n"; 

    m.clear();
    cout<<"\nafter removing the elements "<<"size of map:"<<m.size()<<"\n";

   /* map<string,int>::iterator itr=m.begin();
     cout<<"the first element:  "<<itr->first<<" : "<<itr->second; */

   /*cout<<"reverse order:\n";                            // reverse order
    for (map<string,int>::reverse_iterator itr=m.rbegin();itr!=m.rend();itr++)
     cout<<itr->first<<" : "<<itr->second<<"\n"; */
    }

