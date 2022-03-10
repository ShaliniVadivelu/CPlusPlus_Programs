// ARRAY NAME AS POINTER: array is created and pointer is decalred.An array name contains the address of first element of the array which acts like constant pointer. It means, the address stored in array name can’t be changed.For example, if we have an array named val then val and &val[0] can be used interchangeably.

#include<iostream>
using namespace std;

void print ()
{
    int arr[3]={10,20,30};
    int *ptr;
    for (int i=0;i<3;i++)
    {
        ptr= &arr[i];                   //ptr =arr; 
        cout<<" "<< ptr<<" "<< *ptr<<endl;       //cout<<" "<< ptr[i]<<" "<< &ptr[i]<<endl;  
    }
}
int main ()
{
     print();
}

//*********************************************************************************************
// C++ program to illustrate Void Pointer in C++
#include <bits/stdc++.h>
using namespace std;
void increase(void *data,int ptrsize)
{
    if(ptrsize == sizeof(char))
    {
        char *ptrchar;
          
        //Typecast data to a char pointer
        ptrchar = (char*)data;
          
        //Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        cout << "*data points to a char"<<"\n";
    }
    else if(ptrsize == sizeof(int))
    {
        int *ptrint;
          
        //Typecast data to a int pointer
        ptrint = (int*)data;
          
        //Increase the int stored at *ptrchar by 1
        (*ptrint)++;
        cout << "*data points to an int"<<"\n";
    }
}
void geek()
{
    // Declare a character 
    char c='u';
      
    // Declare an integer
    int i=10;
      
    //Call increase function using a char and int address respectively
    increase(&c,sizeof(c));
    cout << "The new value of c is: " << c <<"\n";
    increase(&i,sizeof(i));
    cout << "The new value of i is: " << i <<"\n";
      
}
//Driver program
int main()
{
    geek();
}

//************************************************************************
// NULL POINTER
// Null pointer is a pointer that points nowhere and not just a invalid address.there are two ways to decalre null pointer
// int *ptr =0; int *ptr=NULL;
