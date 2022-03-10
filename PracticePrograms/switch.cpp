# include <iostream>
using namespace std ;

int main ()
{
    int x, y;
    char op;

    cout <<"enter any 2 number:";
    cin >> x >> y;

    cout <<"enter any 1 operator from (+,-,/,*,%) : ";
    cin >> op;

    switch (op)
    {
    case ('+'):
        cout << x << " + " << y << "= " << "" << x+y;
        break;
     case ('-'):
        cout << x << " - " << y << "= " << "" << x-y;
        break;
         case ('/'):
        cout << x << " / " << y << "= " << "" << x/y;
        break;
         case ('*'):
        cout << x << " * " << y << "= " << "" << x*y;
        break;
         case ('%'):
        cout << x << " % " << y << "= " << "" << x%y;
        break;
    default:
        cout << "Error !! entered incorrect operator";
        break;
    }
}