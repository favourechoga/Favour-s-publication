#include <iostream>

using namespace std;
void greet(int day_time);
int day;
int main()
{
    cout << "Enter a valid day time in hour" << endl;
    cin>>day;
    greet(day);

void greet (int day_time) {
if (day_time <12) {
    cout<<"GOOD MORNING";
}
else if (int day_time <16) {
    cout<<"GOOD AFTERNOON";
}
 else if (int day_time <20) {
    cout<<"GOOD EVENING";
}
else if (int day_time <24) {
    cout<<"GOOD NIGHT";
}
}
else if{
    cout<<"INVALID DAY/TIME";
}
return 0;*/
}
