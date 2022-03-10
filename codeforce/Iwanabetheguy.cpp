#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{   int level[250];                     // array created
// getting input from user 
    int game_level,x_level,y_level, count=0;        
    cin>>game_level;
    // storing the x person game level to the array
    cin>>x_level;
    for (int i = 0; i < x_level; i++)
    {
        cin>>level[i];
    }
    // storing the y person game level in the same array
    cin>>y_level;
    for (int i = x_level; i < x_level+y_level; i++)
    {
        cin>>level[i];
    }
    // sorting them in ascending order so that we can compare and get to know whether any of the level is not completed
    sort(level, level+(x_level+y_level));
    for (int i=0;i<x_level+y_level;i++)
    {
        if (level[i]!=level[i+1])
        {
            count++;
        }
        //else
        //cout<<"Oh, my keyboard!";
        //break;
    }
    //cout<<"I become the guy.";
    // if count is equal means x and y can pass the whole game with cooperation
    if (game_level==count)
    {
        cout<<"I become the guy."<<endl;
    }
    else 
    cout<<"Oh, my keyboard!"<<endl; 

}