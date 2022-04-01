// // OLEDSYA AND RODION
// Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t. Find some number that satisfies both of them.

// Your task is: given the n and t print an integer strictly larger than zero consisting of n digits that is divisible by t. If such number doesn't exist, print  - 1.

// InputA
// The single line contains two numbers, n and t (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) — the length of the number and the number it should be divisible by.

// Output
// Print one such positive number without leading zeroes, — the answer to the problem, or  - 1, if such number doesn't exist. If there are multiple possible answers, you are allowed to print any of them.

#include<iostream>
using namespace std;

int main ()
{
    int n_digit, n_div;         
    while (cin>>n_digit>>n_div) {    // getting the no.of digit and num that divides the number

    if ( (n_digit==1)&&(n_div==10) )  // as per cdn, (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) 
    {
        cout<<"-1"<<endl;
    }
    else if((n_digit>=2) && (n_div==10))
        {
            for(int i=1; i<n_digit; i++){
                cout<<"1";
            }
            cout<<"0"<<endl;
        }
    else
        {
            for(int i=1;i<=n_digit;i++){
                cout<<n_div;
            }
            cout<<endl;
        }
    }
}

// i/p: 3 2  o/p: 222