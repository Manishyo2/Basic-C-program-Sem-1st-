#include <stdio.h>

int main() {
    // Declare a 3x4 matrix
    int matrix[3][4];

    // Read elements of the matrix
    printf("Enter elements of the 3x4 matrix:\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize variables to store the biggest and smallest elements
    int biggest = matrix[0][0];
    int smallest = matrix[0][0];

    // Find the biggest and smallest elements in the matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (matrix[i][j] > biggest) {
                biggest = matrix[i][j];
            }

            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }
    }

    // Display the results
    printf("\nMatrix elements:\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe biggest element in the matrix is: %d\n", biggest);
    printf("The smallest element in the matrix is: %d\n", smallest);

    return 0;
}
