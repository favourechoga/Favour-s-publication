#include <iostream>

using namespace std;
void sumArrays(int array1[2][4], int array2[2][4], int result[2][4]) {
    for (int i=0;i<2;++i) {
    for (int j=0;j<4;++j) {
    }
    }
}
int main()
{

const int ROWS = 2;
const int COLS = 4;


    int array1[2][4] = {5, 7, 3, 9, 6, 4, 2, 8};
    int array2[2][4] = {1, 7, 8, 9, 10, 15, 7, 11};
    int result[2][4];

    sumArrays(array1, array2, result);

    // Displaying the result
    for (int i=0;i<2;++i) {
        for (int j=0; j<4;++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
