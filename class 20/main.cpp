#include <iostream>

using namespace std;
void change(int x,int y);
int main()
{
    int x=15;
    int y=20;

    cout<< "THE VALUE OF X AFTER FUNCTION CALL IS " <<x<< endl;
    cout<< "THE VALUE OF Y AFTER FUNCTION CALL IS " <<y<< endl;
change(x,y);
    return 0;
}
void change(int x,int y){
    int x=50;
    int y=100;
    cout<< "THE VALUE OF X WITHIN THE FUNCTION IS " <<x<< endl;
    cout<< "THE VALUE OF Y WITHIN THE FUNCTION IS " <<y<< endl;
}
