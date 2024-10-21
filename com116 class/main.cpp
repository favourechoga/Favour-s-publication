#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cout<< "Enter your age:";
    cin>> age;
    if (age<=12)
    {
    cout<< "You are a child\n";
    }
    else if (age<=19)
    {
        cout<<"You are a teenager\n";
    }
    else if (age<=49)
    {
        cout<<"You are an adult\n";
    }
    else if (age>=50)
    {
        cout<<"You are a citizen\n";
    }
}
