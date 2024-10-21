#include <iostream>

using namespace std;

int main()
{
    string name[3];int score[3][5];int total=0;float average =0;string
    for (int n=0;n<3;n++){
        cout<<"ENTER NAME FOR STUDENT"<<n;
        cin>>name[n];
    }
    for(int i=0;i<3;i++){
            cout<<"ENTER SCORES FOR STUDENT"<<i;
        for(int j=0;j<5;j++){
            cin>>score[i][j];
            total= total+score[i][j];                                                                                                                                                                                                                                                                                              +score[i[j];

        }
     average= total/5;
     if(average<50)
     status = "FAIL";
     else
     status="PASS";

     cout<<name[i]<<"AVERAGE IS"<<average<<"TOTAL IS
     average=0;total=0;
    }
    return 0;
}
