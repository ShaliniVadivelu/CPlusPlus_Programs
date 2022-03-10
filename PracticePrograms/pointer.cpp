#include<iostream>
using namespace std;

void swap(int* n1, int* n2) 
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "\t" << a << b;
 
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
     cout << "\t" << a << b;
    return 0;
}


/*int main()  // getting the ip from user , print add of values and stored values
{
    int x;
    int* ptr;

    ptr=&x;

    cout<<"enter a number";
    for (int i=0;i<5;i++)
    cin>>x;

    cout<<"address of x:";
    for (int i=0;i<5;i++)
    cout<<"\n"<<ptr<<"\n";
    
    cout<<"value of x:";
    for (int i=0;i<5;i++)
    cout<<"\n"<<*ptr;

} */