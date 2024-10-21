#include <iostream>
int ave4(int a, int b, int c, int d);
using namespace std;
int main()
{
   int numb1, numb2, numb3, numb4, result;
   cout<<"ENTER ANY FOUR NUMBERS: ";
   cin>>numb1 >>numb2 >>numb3 >>numb4;
   //result = numb1 + numb2;
   result = ave4(numb1, numb2, numb3, numb4);
   cout<< "THE AVERAGE OF THE NUMBERS IS: "<<result;
    return 0;
}
int ave4(int a, int b, int c, int d){
int solution;
solution = (a+b+c+d)/4;
return solution;
}
