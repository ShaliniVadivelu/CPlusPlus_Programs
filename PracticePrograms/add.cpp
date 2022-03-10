#include <iostream>
using namespace std;

int main ()
{
    int x,sum=0;
    cout <<"Enter a number:";
    cin>>x;

  for(int i=1; i<=x; i++)
    sum +=i; 
    cout<<"sum of first "<<x<<" natural numbers:"<< sum<<"\n";  
}






/*#include <iostream>
#include <cmath>
using namespace std;

void addition (float x, float y) 
{
    float sum;
     sum=x+y;
     cout <<"addition of 2 num is :"<< sum;
}

void squareroot (float x, float y) 
{
    float squareroot;
     squareroot=sqrt(x*y);
     cout <<"squareroot of 2 num is :"<< squareroot;
}

int main ()
{
float a,b;
cout <<"enter 2 inter to add:";
cin >>a>>b;
addition (a,b);
squareroot (a,b);
}*/