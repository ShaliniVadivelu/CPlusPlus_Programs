
#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++) 
    {
        
        int s;
        cin >> s;

        v[i].resize(s);
        for (int j = 0; j < s; j++) 
        {
            cin >> v[i][j];
        }
    }

    
    for (int k = 0; k< q; k ++) 
    {
        
        int i, j;
        cin >> i >> j;
        cout << v[i][j] << endl;
    }

    return 0;
} 

#include<iostream>
#include<string>
using namespace std;

int main()
{
int a,b;
string s;
string str[]= {"","one","two","three","four","five","six","seven","eight","nine","even","odd"};

cin>>a>>b;
   
 for (int i=a;i<=b;i++)
 {
     if(i<=9)
     {
         cout<<""<<str[i]<<"\n";
     }


     else
    {
        cout<<""<<str[10+(i%2)];
    }
     /*{ also crt
             s= (i %2 ==0) ? "even": "odd";
        cout<<""<<s<<"\n";
     } */
 }
/*   this is also crt.
 for (int i=10;i<=b;i++)
 {
        s= (i %2 ==0) ? "even": "odd";
        cout<<""<<s<<"\n";
 } */

 } 