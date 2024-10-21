#include <iostream>

using namespace std;
int sumarray;
int main()
{
    int array23B[5] = {50,40,60,75,63};
    int array23C[5] = {56,73,82,55,60};
    //int length = size of(array23B)/ size of (array23B[0]);
    //int sum array[size];
    for (int i= 0; i< 5;i++) {
            //cout<< array23B[i]<<endl;
            int sumArray = array23B[i] + array23C[i];
    cout<<sumArray<< endl;
    }
    return 0;
}
