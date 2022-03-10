#include<iostream>
using namespace std;

int main()
{
    int n,num,rem,digitcube=0;
    cout <<"Enter a number:";
    cin>>n;
    num=n;

    while (num!=0)
    {
    rem = num % 10;
    digitcube += (rem*rem*rem);
    num /= 10;
    }

    if (digitcube==n)
        cout<<n<<"is a Amstrong number";
    else
    cout<<n<<" not a Amstrong number";
    }