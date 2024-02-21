#include <stdio.h>

float calculate_average_diagonal(int size, int matrix[size][size]) {
    float sum = 0;
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
        count++;
    }
    
    return sum / count;
}

int count_positive_elements(int size, int matrix[size][size]) {
    float average_diagonal = calculate_average_diagonal(size, matrix);
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > average_diagonal && matrix[i][j] > 0) {
                count++;
            }
        }
    }
    
    return count;
}

int main(void) {
    const int size = 5;
    int matrix[size][size];
    
    printf("\n");
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int count = count_positive_elements(size, matrix);
    
    printf("%d\n", count);
    
    return 0;
}
