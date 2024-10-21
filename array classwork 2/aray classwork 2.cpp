#include <iostream>

using namespace std;

int main()
{
    int score [8];int list2[8];int total[8];
    for (int i=0;i<8;i++){
     cout<<"Enter value for score"<<i<<" : ";
     cin>>score[i];
    }
     cout<<"\n WE ARE DONE WITH THE FIRST LIST NOW LET'S READ IN THE SECOND LIST\n";


     for (int j=0;j<8;j++){
     cout<<"Enter value for list 2 value"<<j<<" : ";
     cin>>list2[j];
     }
     for (int k=0;k<8;k++){
      total[k]= score[k]+list2[k];
     }
     for (int l=0;l<8;l++){
      cout<<total[l]<<endl;
     }
    return 0;
}
