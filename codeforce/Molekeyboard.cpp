#include<iostream>
#include<string>
using namespace std;

string findCorrectWord(string wrong_word, char c)           // arguments are wrong word and direction (l or r)
{
    string keyboard_seq="qwertyuiopasdfghjkl;zxcvbnm,./";   // declaring the strings as such in keyboard
    string exact_word;          
    int l=wrong_word.length();


    for (int i=0;i<l;i++)                                   // iterting the loop to find the position of each word in an error sequence and store that index in one variable and then print the crt word everytime by decrementing the index to 1.
    {   
        int store_index=keyboard_seq.find(wrong_word[i]);
        if (c=='R')
            exact_word += keyboard_seq[store_index -1];

        else
         exact_word += keyboard_seq[store_index +1];;
    }
return exact_word;
}

int main()
{
    char ch;
    cin >>ch;
    string error_word;
    cin>>error_word;            // getting the error filled word
    
    cout<<findCorrectWord(error_word, ch);      // calling the fun by passwing the error word and direction whether left or right
}
    
