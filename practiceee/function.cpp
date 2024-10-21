#include <iostream>
using namespace std;
int sum(int num1,int num2);
int main()
{
    int a=10;
    int b=20;
    int result;
    result = sum(a,b);
    cout<<"Sum is:"<<result<<endl;

    return 0;

}
int sum(int num1,int num2){
int c;
c = num1+num2;
return c;
}


