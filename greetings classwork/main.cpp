#include <iostream>

using namespace std;
int greet(int day_time);
int main()
{
    int day;
    cout<< "Enter a valid day time in hour" << endl;
    cin>>day;
    cout<< "greet(day)";
    return 0;
}
    void greet( day_time){
    if (day_time <12) {
        cout<<"GOOD MORNING";
    }
    else if (day_time <16) {
        cout<<"GOOD AFTERNOON";
    }
     else if (day_time <20) {
        cout<<"GOOD EVENING";
    }
    else if (day_time <24) {
        cout<<"GOOD NIGHT";
    }
}
