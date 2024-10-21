#include <iostream>

using namespace std;

int main()
{

    int rows,cols,i,j;
    int one[50][50];int two[50][50];int sum[50][50];

    cout<<"Enter rows and columns of matrix\n";
    cin>>rows>>cols;

    cout<<"Enter first matrix of size"<<rows<<"X"<<cols;
    for(int i=0;i<rows;i++){

    for(int j=0;j<cols;j++){
    cin>>one[i][j];
    }
    }
    cout<<"Enter the second matrix of size"<<rows<<"X"<<cols;

    for(int i=0;i<rows;i++){

    for(int j=0;j<cols;j++){
            cin>>two[i][j];

    }
    }
    for(int i=0;i<rows;i++){

    for(int j=0;j<cols;j++){

    sum[i][j]= one[i][j]+ two[i][j];
    }
    }

    cout<<"Sum matrix\n";
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
