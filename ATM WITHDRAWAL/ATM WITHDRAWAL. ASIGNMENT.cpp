#include <iostream>

using namespace std;
int mainpin = 1234;
int maxAtt = 3;

int main()
{ int pin;
  int withdrawalNum;
  int otheramount;
  int attempt;

    cout<<"You are welcome to Zenith Bank ATM" << endl;
    cout<<"Written by Echoga Favour\n"<<endl;
    cout<<"BU/23B/IT/8410\n"<<endl;
    cout<<"Enter your pin to progress:\n"<<endl;
    for (int attempt = 1; attempt <= maxAtt; attempt++) {
     cin>>pin;
    }
    if (pin == mainpin){
        cout <<"Select the amount you wish to withdraw:"<< endl;

        cout<<"1- #1000\n";
        cout<<"2- #5000\n";
        cout<<"3- #10000\n";
        cout<<"4- #15000\n";
        cout<<"5- Other amount\n";
        cin>>withdrawalNum;

    switch(withdrawalNum){
        case 1:
        cout<<"\nYou have successfully withdrawn #1000";
        break;

        case 2:
        cout<<"\nYou have successfully withdrawn #5000";
        break;

        case 3:
        cout<<"\nYou have successfully withdrawn #10000";
        break;

        case 4:
        cout<<"\nYou have successfully withdrawn #15000";
        break;

        case 5:
        cout<<"\nEnter the amount you want to withdraw:\n";
        cin>>otheramount;
        cout<<"You have successfully withdrawn #"<<otheramount;
        break;

        default:
            cout<<"Wrong output Try again";
         break;

    }return 0;
   }  if (pin = mainpin){
        cout<<"Wrong pin You have"<<maxAtt - attempt<<"attempts left"<<endl;
       } else {
            cout<<"Wrong pin. Maximum attempts reached. Your card is blocked."<<endl;
        }
}
