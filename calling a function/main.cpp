#include <iostream>

using namespace std;

void calc(int x);

int main()
{
    int x = 10;
    cout <<x;

    {
        x = x + 10;
    }
    Output:10;
    return 0;
}
