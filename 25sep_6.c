#include <stdio.h>

int main() {
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int row_sum, col_sum;

    printf("Our 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of each row:\n");
    for (i = 0; i < 3; i++) {
        row_sum = 0; 
        for (j = 0; j < 3; j++) {
            row_sum += matrix[i][j]; 
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }


    printf("\nSum of each column:\n");
    for (j = 0; j < 3; j++) {
        col_sum = 0; 
        for (i = 0; i < 3; i++) {
            col_sum += matrix[i][j]; 
        }
        printf("Column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}