#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS]; // Array to store the sum of each row
    int rows, cols;

    // 1. Get the dimensions of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Safeguard against exceeding array boundaries
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Maximum allowed dimensions are %dx%d\n", MAX_ROWS, MAX_COLS);
        return 1;
    }

    // 2. Input matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate the sum of each row and store it in rowSums array
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0; // Reset sum tracker for each new row
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum; // Store the final sum in the tracking array
    }

    // 4. Output the results
    printf("\n--- Results ---\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of elements in Row %d = %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
