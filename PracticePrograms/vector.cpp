#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector <int> v1{2,4,6,8,10,12,14};
   vector <int> v2{20,40,60,80,10,120,140};
   int x,y;

    cout<<"vector v1:";
   for (int i=0;i<7;i++)
   cout<<"\t"<<v1.at(i);

   cout<<"\nvector v2:";
   for (int i=0;i<v1.size();i++)
   cout<<"\t"<<v2.at(i);

  if(v1.empty())
  cout<<"\nvector v1 is empty\n";
  else
  cout<<"\nvector v1 is not empty\n"; 

   v1.push_back(50);
   v1.pop_back();
   for (int i=0;i<v1.size();i++)
   cout<<" "<<v1[i]; 

   cout<<"\n";
   v1.insert(v1.begin()+2,3,10);
   v1.insert(v1.end()-2,10);
   v1.erase(v1.begin()+1);
   v1.resize(12);
   v1.assign(v1.begin()+1,v1.end()-2);
   v1.emplace_back(50);
   for (int i=0;i<v1.size();i++)
   cout<<" "<<v1[i];

   cout<<"\n";
   vector <int> :: iterator it=v1.emplace(v1.begin()+1,15);
   v1.emplace(it,25);
   for (int i=0;i<v1.size();i++)
   cout<<" "<<v1[i];

   {                                                   // swapping
   v1.swap(v2);
   cout<<"\n after swapping of v1: ";
      for (int i=0;i<v1.size();i++)
   cout<<" "<<v1[i];

   cout<<"\n after swapping of v2: ";
      for (int i=0;i<v2.size();i++)
   cout<<" "<<v2[i];
    } 
  
  vector<int>:: reverse_iterator ritr;
   cout<<"\n reverse of v1";
   for (ritr=v1.rbegin();ritr!=v1.rend();ritr++)
   cout<<" "<<*ritr;

   cout<<"\n reverse of v2";
   for (ritr=v2.rbegin();ritr!=v2.rend();ritr++)
   cout<<" "<<*ritr;
   cout<<"\n";

   x=v1.size();
   cout<<"\nsize of v1 vector: "<<x;
   y=v2.size();
   cout<<"\nsize of v1 vector: "<<y;

}
