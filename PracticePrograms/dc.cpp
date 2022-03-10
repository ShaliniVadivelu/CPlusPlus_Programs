# include <iostream>
using namespace std;

void prime();

int main()
{
    // No argument is passed to prime()
    prime();
    return 0;
}


// Return type of function is void because value is not returned.
void prime()
{

    int num, i=2, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;

  
        if(num % i == 0)
        {
            flag = 1; 
           
        }

    if (flag == 1)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        cout << num << " is a prime number.";
    }
}