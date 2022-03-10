// A. Anton and Letters
//Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

//Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

#include<iostream>
#include<set>
using namespace std;

int main() 
{
    string letters;

    // set stores only the unique elements
    set <char> s;        

    //getting input from user
        getline(cin,letters);  

        for (int i=0;i<letters.length();i++)
        {
            if (letters[i]>='a' && letters[i]<='z')
            // inserting letters to set
            s.insert(letters[i]);     
        }
         
    cout<<s.size()<<endl;    //printing unique letter count
}

// i/p: {a, b, c} o/p: 3;  
// i/p: {b, a, b, a} o/p: 2;