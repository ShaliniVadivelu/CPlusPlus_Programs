#include<iostream>
#include<vector>
using namespace std;

class Book {
    public :
    string Book_name,Author_name;
    float Book_price,Discount,Final_price;
    
 void getBookDetails()
    {
        cout<<"Book name is "<<Book_name<<"\n";
        cout<<"Author of the Book is "<<Author_name<<"\n";
        cout<<"Original price of the Book is "<<Book_price<<"\n";
        cout<<"Discount in % is  "<<Discount<<"\n";
    }

    void getFinalPrice()
    {
        Final_price=Book_price-((Book_price * Discount)/100);
        cout<<"Final price of the Book is "<<Final_price<<"\n";
    }
   
};

int main()
{
    int n;
    cin>>n;
    vector<Book>book_details;

    Book bkobj;
    
    for (int i=1;i<=n;i++)
    {
        cin>>bkobj.Book_name>>bkobj.Author_name>>bkobj.Book_price>>bkobj.Discount;
        {
            book_details.push_back(bkobj);
        }
    }

    for (Book bk : book_details)
    {
        bk.getBookDetails();
        bk.getFinalPrice();
    }
    
}