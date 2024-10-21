#include <iostream>

using namespace std;
int main()
{
    int i;
    float mark[6];
    cout <<"Enter the marks of your 6 subjects::\n";
    for (i=0;i<6;i++)
    {
        cin>>mark[i];
    }
    float sum=0;
    for (i=0;i<6;i++)
    {
        sum +=mark[i];
    }
    float ave= sum/6;
    cout<<"Average mark is::"<<ave<<'\n';
    return 0;
}
