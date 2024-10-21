#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"ENTER A MONTH OF THE YEAR IN NUMERICAL POSITION"<<endl;
    cin>>x;

    switch(x){
    case 1:
        cout<<"THE EQUIVALENT MONTH IS JANUARY \n";
        break;

         case 2:
        cout<<"THE EQUIVALENT MONTH IS FEBRUARY \n";
        break;

         case 3:
        cout<<"THE EQUIVALENT MONTH IS MARCH \n";
        break;

         case 4:
        cout<<"THE EQUIVALENT MONTH IS APRIL \n";
        break;

         case 5:
        cout<<"THE EQUIVALENT MONTH IS MAY \n";
        break;

         case 6:
        cout<<"THE EQUIVALENT MONTH IS JUNE \n";
        break;

         case 7:
        cout<<"THE EQUIVALENT MONTH IS JULY \n";
        break;

         case 8:
        cout<<"THE EQUIVALENT MONTH IS AUGUST \n";
        break;

         case 9:
        cout<<"THE EQUIVALENT MONTH IS SEPTEMBER \n";
        break;

         case 10:
        cout<<"THE EQUIVALENT MONTH IS OCTOBER \n";
        break;

         case 11:
        cout<<"THE EQUIVALENT MONTH IS NOVEMBER \n";
        break;

         case 12:
        cout<<"THE EQUIVALENT MONTH IS DECEMBER \n";
        break;

        default:
        cout<<"ENTER A VALID INPUT";}
    return 0;

}
