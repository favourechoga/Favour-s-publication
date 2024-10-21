#include <stdio.h>

int main() {
    // Declare a 3x5 multi-dimensional array
    int score[3][5];

    // Use nested loops to read in values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter value for score[%d][%d]: ", i, j);
            scanf("%d", &score[i][j]);
        }
    }

    // Display the entered values
    printf("\nEntered values in the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}
