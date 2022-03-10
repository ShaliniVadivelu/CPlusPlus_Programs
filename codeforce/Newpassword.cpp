/*Innokentiy decides to change the password in the social net "Contact!", but he is too lazy to invent a new password by himself. That is why he needs your help.

Innokentiy decides that new password should satisfy the following conditions:

the length of the password must be equal to n,
the password should consist only of lowercase Latin letters,
the number of distinct symbols in the password must be equal to k,
any two consecutive symbols in the password must be distinct.
Your task is to help Innokentiy and to invent a new password which will satisfy all given conditions.

Input
The first line contains two positive integers n and k (2 ≤ n ≤ 100, 2 ≤ k ≤ min(n, 26)) — the length of the password and the number of distinct symbols in it.

Pay attention that a desired new password always exists.

Output
Print any password which satisfies all conditions given by Innokentiy. */


#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int pw_len,dis_char;
    cin>>pw_len>>dis_char;
    string s1={"abcdefghijklmnopqrstuvwxyz"}, s2 ="";   // decalring the string with 26 small alphabets and one empty string to store the ne pw.

    for (int i=0;i<pw_len;i++) 
    {
        s2 += s1[i%dis_char];       // if we '/' we will not get sequence as 0 1 2, tats y used % it will give like 0%3 =0, 1%3=1... 
    }
    cout<<s2;

} 

// i/p: 4 3 -> o/p abca
// i/p: 6 6 -> o/p abcdef
// i/p: 12 3 -> o/p abcabcabcabc