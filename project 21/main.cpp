#include <iostream>

using namespace std;

int main()
{
    //int scores[5]= {60,40,80,70,50
    int scores[5];
    int total_scores = 0;
    cout << "Enter scores for student 1" << endl;
    for(int i = 0; i<5; i++){
        cout<<"Enter value for score "<<i<<" : ";
        cin>>scores[i];
        total_scores = total_scores+scores[i];
    }
    cout<<"The sum of the scores entered is"<<total_scores;
     int average = total_scores/5;
     cout<< "\n The average is "<<average;
    return 0;
}
