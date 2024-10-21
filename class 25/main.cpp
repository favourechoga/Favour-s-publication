#include <iostream>

using namespace std;

int main()
{
    string pass;
   int i = 1;
    do {
        cout<<"ENTER PASSWORD :  ";
        cin>>pass;
        i++;
        if(pass == "1234"){
            cout<< "YOU ARE LEGIT \n";
            cout<< "ACCESS GRANTED \n";
        }
        else{
            cout<<"YOU ARE ILLEGAL \n";
            cout<<"ACCESS DENIED \n";
        }


