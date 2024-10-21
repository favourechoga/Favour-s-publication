#include <iostream>
using namespace std;
greet(int day_time);
int main()
{
 int day;
    cout << "ENTER A VALID DAY TIME IN HOUR" << endl;
    cin>>day;
    greet(day);
    return 0;
}
void greet(int day_time){
if (day_time <12){
    cout<< "GOOD MORNING";
}
else if (day_time<16){
    cout<<"GOOD AFTERNOON";
}
else if (day_time<20){
    cout<<"GOOD EVENING";
}
}
