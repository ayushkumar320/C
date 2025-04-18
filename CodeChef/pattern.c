#include <stdio.h>

int main() {
    int rows, i, j, stars;
    
    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Determine the number of stars for the current row (odd number)
        stars = 2 * i - 1;
        
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
