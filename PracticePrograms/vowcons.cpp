#include<iostream>
using namespace std;

int main()
{
    char x;

    cout<<"Enter any alphabet";
    cin>>x;

    if(!isalpha(x))
    cout<<"Error!! not a alphabet";

    else if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'|| x=='A'||x=='E'||x=='I'||x=='O'|| x=='U')
        cout<<"it is a vowel";

    else 
    cout<<"it is a consonat";
}