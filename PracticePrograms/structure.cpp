#include<iostream>
#include<cstring>
using namespace std;

struct person {
    int age;
    char name[100];
    float salary;
} p1;

int main ()
{
    strcpy(p1.name, "Shalini Srirama Vadivelu");
    p1.age = 20;
    p1.salary =52000;
    cout<<" "<<p1.name<<" "<<p1.age<<" "<<p1.salary<<endl;

    // cout<<" Age: ";
    // cin>>p1.age;
    // cout<<" Name: ";
    // cin>>p1.name;
    // cout<<" Salary: ";
    // cin>>p1.salary;

    struct person *p2=&p1;
    cout<<" "<<p2->name<<" "<<p2->age<<" "<<p2->salary<<endl;

}
