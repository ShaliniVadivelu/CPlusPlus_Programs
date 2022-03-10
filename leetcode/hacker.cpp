
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

/*#include<iostream>          //hacker wrong program 2d array
using namespace std;

int main()
{
    int arr[100000000];
    int n,q,size,index,n1;

    cin>>n>>q;
    for (int i=0;i<n;i++)
    {
        cin>>size;
        {
        for(int i=0;i<size;i++)
        cin>>arr[i];
        }
    }
    
      for (int i=0;i<n;i++)
      cin>>n1>>index;

    while  (n1<n)
    {
    for (int i=0;i<=index;i++)
    {
        if(arr[i]==arr[index])
        cout<<""<<arr[i];
        else
        i++;
    }
    n1++;
    }
}  */

/*#include<iostream>             // hacker reverse array
using namespace std;

int main()
{
    int arr[1000], n;
    
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>arr[i]; 


    for (int i=(n-1);(i<n && i>=0);i--) 
     cout<""<<arr[i];

}*/


/*#include<iostream>               // hacker add and sub
using namespace std;

void sum(int *a, int *b)
{
    int add;
    add=*a+*b;
    cout<<""<<add<<"\n";
}
void diff(int *a,int *b)
{
    int sub;
    sub= (*a<*b) ? (*b-*a) : (*a-*b) ;
    cout<<""<<sub<<"\n";
}

int main ()
{
    int x, y;
    cin>>x>>y;
    sum(&x,&y);
    diff(&x,&y);
}
*/

/*#include<iostream>             // hacker largest of num
using namespace std;

int max(int a,int b,int c,int d)
{
    if (a>b && a>c && a>d)
    cout<<""<<a;
    
    else if(b>c && b>d)
    cout<<""<<b;
    
    else if (c>d)
    cout<<""<<c;

    else
    cout<<""<<d;

    return 0;
}

int main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    max(p,q,r,s);
} */


    // hacker rank numbers
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
int a,b;
string s;
string str[]= {"","one","two","three","four","five","six","seven","eight","nine"};

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
/*   this is also crt.
 for (int i=10;i<=b;i++)
 {
        s= (i %2 ==0) ? "even": "odd";
        cout<<""<<s<<"\n";
 } */


/* int main()   //set precision
{
     double d;

    cin>>d;
    cout<<setprecision(9)<<d<<"\n";
    cout<<fixed<<setprecision(3);
} */